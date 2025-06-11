#include "stdio.h"
#include "def_pinos.h"
#include "config.c"
#include "glcd.c"
#include "delay.c"
#include "ram_spi.c" // Inclui o driver da RAM SPI

// --- Pinos de Controle ---
#define MOTOR P1_7
#define MICROONDAS P0_7
#define BUZZER P2_7

// --- Constantes do Sistema ---
#define TECS_OPEN 255
#define ENDERECO_ULTIMO_TEMPO 0x0100 // Endereço na RAM SPI para salvar o tempo

// --- Variáveis Globais ---
// Para UART
volatile __bit char_recebido_flag = 0;
volatile unsigned char char_uart;
// Para Botões Físicos
volatile unsigned char TECLA = TECS_OPEN;
volatile unsigned char TECLA_ANT = TECS_OPEN;

// --- Protótipos das Funções ---
void fase_entrada_dados(int *tempo_final_s);
void fase_contagem_regressiva(int tempo_total_s);
void fase_finalizacao(int tempo_executado_s);
unsigned char le_tec(void);


/*************************************************
*
* INTERRUPÇÕES (UART e Timer para Botões)
*
*************************************************/
void uart_ISR() __interrupt 4 {
    if (RI0 == 1) {
        char_recebido_flag = 1;
        char_uart = SBUF0;
        RI0 = 0;
    }
}

// ISR para varredura dos botões (requer configuração do Timer 2)
void ISR_TC2(void) __interrupt 5 {
    unsigned char tecla_atu = le_tec();
    if (TECLA_ANT == TECS_OPEN && tecla_atu != TECS_OPEN) {
        TECLA = tecla_atu; // Detecta borda de descida
    }
    TECLA_ANT = tecla_atu;
    TF2 = 0; // Limpa flag de overflow do Timer 2
}

/*************************************************
*
* FUNÇÕES AUXILIARES (Leitura de Botão e Buzzer)
*
*************************************************/
unsigned char le_tec(void) {
    if(P3_0==0) return 0;
    if(P3_1==0) return 1;
    if(P3_2==0) return 2;
    // Adicione outros botões se necessário
    return TECS_OPEN;
}

void ligar_buzzer() {
    unsigned int ciclos = 3, meio_periodo = 1500;
    while (ciclos--) {
        BUZZER = 0;
        delay_us(meio_periodo);
        BUZZER = 1;
        delay_us(meio_periodo);
    }
}

/*************************************************
*
* FASE 1: ENTRADA DE DADOS
*
*************************************************/
void fase_entrada_dados(int *tempo_final_s) {
    int tempo_digitos[4] = {0, 0, 0, 0};
    int tempo_atual_s;
    unsigned char high_byte, low_byte;

    // Lê o último tempo da RAM SPI
    high_byte = le_RAM_SPI(ENDERECO_ULTIMO_TEMPO);
    low_byte = le_RAM_SPI(ENDERECO_ULTIMO_TEMPO + 1);
    tempo_atual_s = (high_byte << 8) | low_byte;

    // Converte segundos para o formato de dígitos M:S
    tempo_digitos[1] = (tempo_atual_s / 60) % 10;
    tempo_digitos[0] = (tempo_atual_s / 60) / 10;
    tempo_digitos[3] = (tempo_atual_s % 60) % 10;
    tempo_digitos[2] = (tempo_atual_s % 60) / 10;

    // Limpa a tela e exibe o menu
    limpa_glcd(ESQ);
    limpa_glcd(DIR);
    printf_fast_f("\x01 Tempo (UART):");
    printf_fast_f("\x02 > %d%d:%d%d", tempo_digitos[0], tempo_digitos[1], tempo_digitos[2], tempo_digitos[3]);
    printf_fast_f("\x04 Btn0:30s | Btn1:1m");
    printf_fast_f("\x05 UART: 'L' p/ Ligar");
    printf_fast_f("\x06       'C' p/ Limpar");

    while(1) {
        // --- Processa entrada do Teclado (UART) ---
        if (char_recebido_flag) {
            char_recebido_flag = 0;
            if (char_uart >= '0' && char_uart <= '9') {
                tempo_digitos[0] = tempo_digitos[1];
                tempo_digitos[1] = tempo_digitos[2];
                tempo_digitos[2] = tempo_digitos[3];
                tempo_digitos[3] = char_uart - '0';
            } else if (char_uart == 'C' || char_uart == 'c') {
                for(int i=0; i<4; i++) tempo_digitos[i] = 0;
            } else if (char_uart == 'L' || char_uart == 'l') {
                *tempo_final_s = ((tempo_digitos[0]*10 + tempo_digitos[1])*60) + (tempo_digitos[2]*10 + tempo_digitos[3]);
                return;
            }
            printf_fast_f("\x02 > %d%d:%d%d", tempo_digitos[0], tempo_digitos[1], tempo_digitos[2], tempo_digitos[3]);
        }

        // --- Processa entrada dos Botões Físicos ---
        if (TECLA != TECS_OPEN) {
            switch(TECLA) {
                case 0: *tempo_final_s = 30; return;
                case 1: *tempo_final_s = 60; return;
                case 2: *tempo_final_s = 120; return;
            }
            TECLA = TECS_OPEN; // Reseta a tecla após o uso
        }
    }
}

/*************************************************
*
* FASE 2: CONTAGEM REGRESSIVA
*
*************************************************/
void fase_contagem_regressiva(int tempo_total_s) {
    int minutos, segundos;
    if (tempo_total_s <= 0) return;

    MOTOR = 1;
    MICROONDAS = 1;

    limpa_glcd(ESQ);
    limpa_glcd(DIR);
    printf_fast_f("\x01 Aquecendo...");

    while (tempo_total_s >= 0) {
        minutos = tempo_total_s / 60;
        segundos = tempo_total_s % 60;
        printf_fast_f("\x03 %02d:%02d", minutos, segundos);
        delay_ms(1000);
        tempo_total_s--;
    }
}

/*************************************************
*
* FASE 3: FINALIZAÇÃO
*
*************************************************/
void fase_finalizacao(int tempo_executado_s) {
    if (tempo_executado_s <= 0) return;
    
    MOTOR = 0;
    MICROONDAS = 0;

    // Salva o tempo executado na RAM SPI
    esc_RAM_SPI(ENDERECO_ULTIMO_TEMPO, (tempo_executado_s >> 8));     // Salva o byte mais significativo
    esc_RAM_SPI(ENDERECO_ULTIMO_TEMPO + 1, (tempo_executado_s & 0xFF)); // Salva o byte menos significativo

    ligar_buzzer();

    limpa_glcd(ESQ);
    limpa_glcd(DIR);
    printf_fast_f("\x03 PRONTO!");
    delay_ms(3000);
}

/*************************************************
*
* FUNÇÃO PRINCIPAL (MAIN)
*
*************************************************/
void main(void) {
    int tempo_selecionado = 0;

    Init_Device();
    ini_glcd();
    EA = 1; // Habilita todas as interrupções (essencial para UART e Timer2)

    while (1) {
        fase_entrada_dados(&tempo_selecionado);
        fase_contagem_regressiva(tempo_selecionado);
        fase_finalizacao(tempo_selecionado);
    }
}