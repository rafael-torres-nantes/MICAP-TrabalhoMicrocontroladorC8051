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

#define NOP4() NOP();NOP();NOP();NOP()
#define NOP8() NOP4();NOP4()


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
    if(P1_7 == 0) return 0; // Botão 30s
    if(P1_6 == 0) return 1; // Botão 1m
    if(P1_5 == 0) return 2; // Botão 2m
    if(P3_0 == 0) return 3; // NOVO: Botão de Pausa/Retornar
    return TECS_OPEN;
}


void ligar_buzzer() {
    unsigned int ciclos = 3, meio_periodo = 500;
    while (ciclos--) {
        BUZZER = 1;
        delay_ms(meio_periodo);
        BUZZER = 0;
        delay_ms(meio_periodo);
    }
}

/*************************************************
*
* FASE 1: ENTRADA DE DADOS
*
*************************************************/
void fase_entrada_dados(int *tempo_final_s) {
	unsigned int i;
    int tempo_digitos[4] = {0, 0, 0, 0};
    int tempo_atual_s;
    unsigned char high_byte, low_byte;

    // Lê o último tempo da RAM SPI
    high_byte = le_RAM_SPI(ENDERECO_ULTIMO_TEMPO);
    low_byte = le_RAM_SPI(ENDERECO_ULTIMO_TEMPO + 1);
    tempo_atual_s = (high_byte << 8) | low_byte;

    // Se o tempo lido for zero, significa que o último ciclo foi completo.
    // Opcionalmente, pode-se carregar um tempo padrão (ex: 30s) ou o último tempo usado.
    // Neste caso, vamos manter o que a fase_finalizacao salvou.
    if (tempo_atual_s == 0) {
        // Se desejar que ele lembre o ultimo tempo configurado (ex: 120s),
        // a lógica em fase_finalizacao já cuida disso.
        // Se desejar que comece com 0, basta deixar como está.
    }

    // Converte segundos para o formato de dígitos M:S
    tempo_digitos[0] = (tempo_atual_s / 60) / 10;
    tempo_digitos[1] = (tempo_atual_s / 60) % 10;
    tempo_digitos[2] = (tempo_atual_s % 60) / 10;
    tempo_digitos[3] = (tempo_atual_s % 60) % 10;

    // Limpa a tela e exibe o menu
    limpa_glcd(ESQ);
    limpa_glcd(DIR);
    printf_fast_f("\x01 Tempo (UART):");
    printf_fast_f("\x02 > %d%d:%d%d", tempo_digitos[0], tempo_digitos[1], tempo_digitos[2], tempo_digitos[3]);
    printf_fast_f("\x04 BtnP3_1:30s | BtnP3_1:1m"); // Menu ajustado
    printf_fast_f("\x05 UART: 'R' p/ Ligar");
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
                for(i=0; i<4; i++) tempo_digitos[i] = 0;
            } else if (char_uart == 'R' || char_uart == 'r') {
                *tempo_final_s = ((tempo_digitos[0]*10 + tempo_digitos[1])*60) + (tempo_digitos[2]*10 + tempo_digitos[3]);
                esc_RAM_SPI(ENDERECO_ULTIMO_TEMPO, (*tempo_final_s >> 8));
                esc_RAM_SPI(ENDERECO_ULTIMO_TEMPO + 1, (*tempo_final_s & 0xFF));
                return;
            }
        }

        // --- Processa entrada dos Botões Físicos ---
        if (TECLA != TECS_OPEN) {
            unsigned char tecla_pressionada = TECLA;
            TECLA = TECS_OPEN; // **CORREÇÃO: Reseta a tecla imediatamente após a leitura**

            switch(tecla_pressionada) {
                case 0: *tempo_final_s = 30; return;
                case 1: *tempo_final_s = 60; return;
                case 2: *tempo_final_s = 120; return;
            }
        }
		printf_fast_f("\x07 > %d%d:%d%d", tempo_digitos[0], tempo_digitos[1], tempo_digitos[2], tempo_digitos[3]);
    }
}

/*************************************************
*
* FASE 2: CONTAGEM REGRESSIVA
*
*************************************************/
int fase_contagem_regressiva(int tempo_total_s) {
    int minutos, segundos;
    if (tempo_total_s <= 0) return 1; // Se o tempo for zero, considera como concluído

    MOTOR = 1;
    MICROONDAS = 1;

    limpa_glcd(ESQ);
    limpa_glcd(DIR);
    printf_fast_f("\x01 Aquecendo...");
    printf_fast_f("\x04 BtnP3_0: Pausar"); // Exibe a opção de pausar
    printf_fast_f("\x05 UART: 'P' p/ Pausar"); // Exibe a opção de pausar

    while (tempo_total_s >= 0) {
        // --- VERIFICA SE O BOTÃO DE PAUSA FOI PRESSIONADO ---
        if (TECLA != TECS_OPEN) {
            unsigned char tecla_pressionada = TECLA;
            TECLA = TECS_OPEN; // Limpa a flag da tecla

            if (tecla_pressionada == 3) { // Botão de Pausa
                MOTOR = 0;
                MICROONDAS = 0;
                // O tempo restante já foi salvo no segundo anterior pelo laço.
                // Apenas retornamos o status de "pausado".
                return 0; // 0 = Pausado
            }
        }

        // --- VERIFICA SE A UART RECEBEU UM COMANDO DE PAUSA ---
        if (char_recebido_flag) {
            char_recebido_flag = 0;
            if (char_uart == 'P' || char_uart == 'p') {
                MOTOR = 0;
                MICROONDAS = 0;
                // O tempo restante já foi salvo no segundo anterior pelo laço.
                // Apenas retornamos o status de "pausado".
                return 0; // 0 = Pausado
            }
        }

        minutos = tempo_total_s / 60;
        segundos = tempo_total_s % 60;
        printf_fast_f("\x03 %02d:%02d", minutos, segundos);

        // Salva o tempo restante na RAM SPI a cada segundo
        esc_RAM_SPI(ENDERECO_ULTIMO_TEMPO, (tempo_total_s >> 8));
        esc_RAM_SPI(ENDERECO_ULTIMO_TEMPO + 1, (tempo_total_s & 0xFF));

        delay_ms(1000);
        tempo_total_s--;
    }

    // Se o laço terminar normalmente, retorna status "concluído"
    return 1; // 1 = Concluído
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
    int ciclo_concluido = 1; // Flag para controlar o fluxo

    Init_Device();
    ini_glcd();

    // Zera o tempo na RAM na primeira inicialização
    esc_RAM_SPI(ENDERECO_ULTIMO_TEMPO, (0x00));
    esc_RAM_SPI(ENDERECO_ULTIMO_TEMPO + 1, (0x00));
	BUZZER = 0;

    while (1) {
        fase_entrada_dados(&tempo_selecionado);

        // A contagem só inicia se o tempo for maior que zero
        if (tempo_selecionado > 0) {
            ciclo_concluido = fase_contagem_regressiva(tempo_selecionado);

            if (ciclo_concluido) {
                // Se o ciclo foi concluído, executa a finalização
                fase_finalizacao(tempo_selecionado);
            }
            // Se o ciclo foi pausado (ciclo_concluido == 0),
            // o programa simplesmente volta ao início do laço while,
            // chamando fase_entrada_dados(), que irá ler e exibir
            // o tempo restante salvo na RAM.
        }
    }
}