#include "stdio.h"
#include "config.c"
#include "def_pinos.h"
#include "glcd.c"
#include "ram_spi.c"
#include "delay.c"
#include "motor_passo.c"
#include "buzzer.c"

// Definições
#define CASA_DESTRANCADA 0xFF 
#define END_RESIDENCIA_1 0x10
#define END_RESIDENCIA_2 0x20
#define END_RESIDENCIA_3 0x30
#define END_RESIDENCIA_4 0x40

#define LED P2_0

__code const unsigned char end_residencia[4] = {0x10, 0x20, 0x30, 0x40};
__code unsigned char pin[4];

// Variáveis globais
volatile __bit flag_tecla = 0;
volatile unsigned char tecla = 0;
unsigned char dado = 0;

// Funções Prototipadas
void clean_glcd(void);
void isr_UART0(void);
void ligar_buzzer(unsigned int, unsigned int);
unsigned int check_locked(unsigned int);
unsigned int init_residencial_system(void);
void menu_input_password(unsigned int);
void register_menu(unsigned int);
void main_menu(void);
void controlar_motor_passo(unsigned char, unsigned char);

/*******************************
*            Limpa GLCD
********************************/
void clean_glcd() {
    limpa_glcd(ESQ);
    limpa_glcd(DIR);
    conf_pag(0, ESQ);
    conf_pag(0, DIR);
}

/*******************************
*        Interrupção UART (Bluetooth)
********************************/
void isr_UART0(void) __interrupt 4 {
    if (RI0 == 1) {
        tecla = SBUF0;
        flag_tecla = 1;
        RI0 = 0;
    }
}

/***************************************************
*  Função para verificar se a residência está trancada
****************************************************/
unsigned int check_locked(unsigned int house_number) {
    unsigned char dado = le_RAM_SPI(end_residencia[house_number - 1]);
    return dado != CASA_DESTRANCADA;
}

/*******************************
*   Inicializa o sistema residencial
********************************/
unsigned int init_residencial_system() {
    unsigned int flagError = 0;
    unsigned char dado;

    // Inicializa todos os motores de passo e LED
    for (int i = 1; i <= 4; i++) {
        controlar_motor_passo(i, 0);
    }
    LED = 0;

    // Limpa os registros na memória RAM SPI
    for (int i = 0; i < 4; i++) {
        esc_RAM_SPI(end_residencia[i], CASA_DESTRANCADA);
        dado = le_RAM_SPI(end_residencia[i]);
        if (dado != CASA_DESTRANCADA) {
            printf_fast_f("\x01 \nERROR IN RESIDENCE %d !!!!\n", i + 1);
            flagError = 1;
        }
    }
    return flagError;
}

/*************************************
*   Menu para desabilitar o alarme
**************************************/
void menu_input_password(unsigned int number_end) {
    unsigned int pin_correspondente;
    unsigned char pin_residencia[4];
    printf_fast_f("\nInsira a senha de 4 dígitos:\n");

    // Captura o PIN do usuário
    for (int i = 0; i < 4; i++) {
        while (!flag_tecla);
        pin[i] = tecla;
        flag_tecla = 0;
        printf_fast_f("*");
    }

    // Lê o PIN salvo na memória
    for (int i = 0; i < 4; i++) {
        pin_residencia[i] = le_RAM_SPI(end_residencia[number_end - 1] + i);
    }

    // Verifica se o PIN está correto
    pin_correspondente = 1;
    for (int i = 0; i < 4; i++) {
        if (pin_residencia[i] != pin[i]) {
            pin_correspondente = 0;
            break;
        }
    }

    if (pin_correspondente) {
        printf_fast_f("\nAcesso Permitido!\n");
    } else {
        printf_fast_f("\nAcesso Negado!\n");
        ligar_buzzer(3, 1500);
        LED = 1;
    }
}

/*******************************
*   Menu para registrar alarme
********************************/
void register_menu(unsigned int number_end) {
    
    // Caso a Residência esteja Trancada
    if (check_locked(number_end)) {
        printf_fast_f("Residence is LOCKED\n");
        delay_ms(3000);
        printf_fast_f("Aguarde para desbloquear a senha\n");
        delay_ms(3000);
        menu_input_password(number_end);
    } 
    
    // Caso a Residência esteja Aberta (Sem chave)
    else {
        printf_fast_f("\nEnter a 4-digit PIN: ");
        
        // Captura o PIN do usuário
        for (int i = 0; i < 4; i++) {
            while (!flag_tecla);
            pin[i] = tecla;
            flag_tecla = 0;
            printf_fast_f("*");
        }

        // Salva o PIN na memória
        for (int i = 0; i < 4; i++) {
            esc_RAM_SPI(end_residencia[number_end - 1] + i, pin[i]);
        }
        
        controlar_motor_passo(1, 1);
        printf_fast_f("\nPIN registered!\n");
    }
}

/*******************************
*           Main Menu
********************************/
void main_menu() {
    while (1) {
        printf_fast_f("\nResidences Available:\n");

        for (int i = 1; i <= 4; i++) {
            if (check_locked(i)) {
                printf_fast_f("Residence %d - LOCKED\n", i);
            } else {
                printf_fast_f("Residence %d - UNLOCKED\n", i);
            }
        }
        printf_fast_f("\nSelect an option: ");

        while (!flag_tecla);
        flag_tecla = 0;

        switch (tecla) {
            case 'a': register_menu(1); break;
            case 'b': register_menu(2); break;
            case 'c': register_menu(3); break;
            case 'd': register_menu(4); break;
            default: printf_fast_f("Invalid option, try again.\n"); break;
        }
    }
}

/*******************************
*          Main Function
********************************/
void main(void) {
    Init_Device();
    SFRPAGE = LEGACY_PAGE;

    ini_glcd();
    clean_glcd();

    printf_fast_f("\x00 \nSTART\n");
    delay_ms(3000);

    if (init_residencial_system()) {
        printf_fast_f("\x01 \nError: System Off!\n");
        return;
    }

    main_menu();
}