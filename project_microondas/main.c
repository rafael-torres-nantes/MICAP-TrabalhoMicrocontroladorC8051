#include "output_glcd.h"
#include "delay.h"
// #include "mem_eeprom.h"
#include "mem_spi.h"

#define MENU_MANUAL 100
#define MENU_DIGITAL 101

#define MOTOR P1_7
#define MICROONDAS P0_7

#define CANCELAR -1

#define TEMPO_PIPOCA 180
#define TEMPO_FRANGO 1000
#define TEMPO_CARNE 1800

#define ENDERECO 0x01

// Buzzer
#define buzzer P2_7

// Leitura Botoes
#define TECS_OPEN 255
volatile unsigned char TECLA = TECS_OPEN;
volatile unsigned char TECLA_ANT = TECS_OPEN;

// Leitura UART
volatile __bit x = 0;
volatile unsigned char tecla;

unsigned char le_tec(void);
void contagemRegressiva(int);
void resetar_tempo(int tecla);
void ligar_buzzer(void);
int definir_tempo_botao(void);


/*******************************
*
*			BUZZER
*
********************************/

void ligar_buzzer(){
	// Ativa o buzzer

	unsigned int ciclos=3;
	unsigned int meio_periodo=1500;

	while(ciclos){
		P2_7 = 0;
		delay_us(meio_periodo);
		P2_7 = 1;
		delay_us(meio_periodo);
		ciclos--;
	}
}

/*******************************
*
*			LE TECLAS
*
********************************/

unsigned char le_tecla(void){
	if(P3_0==0)
		return 0;
	else if(P3_1==0)
		return 1;
	else if(P3_2==0)
		return 2;
	else if(P3_3==0)
		return 3;
	else if(P3_4==0)
		return 4;
	else if(P3_5==0)	  	// Valor do Menu Manual
		return MENU_MANUAL;
	else if(P3_6==0) 		// Valor do Menu Digital
		return MENU_DIGITAL;
	else if(P3_7==0)		 // Cancelar
		return CANCELAR;
	return TECS_OPEN;

}

/*******************************
*
*			LE TECLAS
*
********************************/

unsigned char le_teclas2(void){
	unsigned char aux;
	switch (~P1){
		case 1:
			aux = 0;
			break;
		case 2:
			aux = 1;
			break;
		case 4:
			aux = 2;
			break;
		case 8:
			aux = 3;
			break;
		case 16:
			aux = 4;
			break;
		case 32:
			aux = 5;
			break;
		case 64:
			aux = 6;
			break;
		case 128:
			aux = 7;
			break;
		default:
			aux = TECS_OPEN;
	}

	return aux;
}



/*******************************
*
*	    Contagem Regressiva
*
********************************/

//contagem regressiva
void contagemRegressiva(int tempoTotal) {
    
	int minutos, segundos;
    int tempoRestante = tempoTotal;
	
	MOTOR = 1;
	MICROONDAS = 1;		
	
	limpa_glcd(ESQ);
	limpa_glcd(DIR);
	conf_pag(0, ESQ);
	conf_pag(0, DIR);

    while (tempoRestante >= 0) {
        minutos = tempoRestante / 60;
        segundos = tempoRestante % 60;
		
		printf_fast_f("\x01 Start Timer..");
	    printf_fast_f("\x02 %02d:%02d", minutos, segundos);
        delay_ms(100); // Espera 1 segundo
        tempoRestante--;
    }
	MOTOR = 0;
	MICROONDAS = 0;
	ligar_buzzer();
	printf_fast_f("\x03 Pronto");


}


/*******************************
*
*	    Resetar o tempo
*
********************************/

void resetar_tempo(int tecla) {
	if(tecla == CANCELAR) {
		definir_tempo_botao();
	}
}

/*******************************
*
*	  Definir tempo por botao
*
********************************/
int definir_tempo_botao() {
	int tempoReal = 0;
	int m1 = 0;
	int m2 = 0;
	int s1 = 0;
	int s2 = 0;

	limpa_glcd(ESQ);
	limpa_glcd(DIR);
	conf_pag(0, ESQ);
	conf_pag(0, DIR);

	printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
	m1 = le_tec() * 10;
	resetar_tempo(m1);

	printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
	m2 = le_tec();
	resetar_tempo(m2);

	printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
	s1 = le_tec() * 10;
	resetar_tempo(s1);
	if(s1 > 50)	s1 = 50;

	printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
	s2 = le_tec();
	resetar_tempo(s2);

	printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
 
    tempoReal = ((m1 + m2) * 60) + (s1 + s2);
	return tempoReal;

}

/*******************************
*
*	Definir tempo por bluetooth
*
********************************/


int definir_tempo_bluetooth() {
	
	int tempoReal = (int)TECLA;

	limpa_glcd(ESQ);
	limpa_glcd(DIR);
	conf_pag(0, ESQ);
	conf_pag(0, DIR);

	printf_fast_f("Tempo %d:", tempoReal);

	return tempoReal;

}


/*******************************
*
*	Escolher Input de Dados
*
********************************/

void escolher_entrada() {
	int tecla_menu;
	int tempo_digital;

	limpa_glcd(ESQ);
	limpa_glcd(DIR);
	conf_pag(0, ESQ);
	conf_pag(0, DIR);

	printf_fast_f("\x01 Selecione o");
	printf_fast_f("\x02 tipo entrada:");
	printf_fast_f("\x04 a - Manual");
	printf_fast_f("\x05 b - Digital");

	tecla_menu = 0;

	while(tecla_menu != MENU_MANUAL || tecla_menu != MENU_DIGITAL) {
		tecla_menu = le_tec();
	}
	
	printf_fast_f("\x06 Tudo pronto!!");
	
	while(1)
	{

		if(tecla_menu==MENU_MANUAL)
		{
			tempo_digital = definir_tempo_botao();
			contagemRegressiva(tempo_digital);
			break;

		}
		if(tecla_menu==MENU_DIGITAL)
		{
			tempo_digital = definir_tempo_bluetooth();
			contagemRegressiva(tempo_digital);
			break;
		}

	}
	escolher_entrada();
	 

}


/*******************************
*
*			UART
*
********************************/

// ISR do UART
void uart_ISR() __interrupt 4{
//evento de recebimento salva  o bite
	if(RI0 == 1){
		x = 1;
		tecla = SBUF0;
		RI0 = 0;
	}
}

/*******************************
*
*			Botoes
*
********************************/

void ISR_TC2(void) interrupt 5 { // é 5 por conta da ordem no datasheet
	unsigned char tecla_atu = le_tec();
	/*
		tecs_open vai dizer se 'vazio' ou não precionado
		então, tecla_ant não esta pressionado, tecla_atu está pressionado. vale para mais de uma tecla
	*/
	if (TECLA_ANT == TECS_OPEN && tecla_atu != TECS_OPEN){  // Borda de descida
		TECLA = tecla_atu;
	}
	else if (TECLA_ANT != TECS_OPEN && tecla_atu == TECS_OPEN){  // Borda de subida
		TECLA = tecla_atu;
	}
	TECLA_ANT = tecla_atu;

	TF2 = 0; // Flag de Overflow
}



// Interruption for detection SCL (if NL0 increment, if not, reset)
void Timer4_ISR (void) interrupt 16
{
	SMB0CN &= ~0x40;	// Desabilita SMBus
	SMB0CN |= 0x40;		// Habilita SMBus
	TF4 = 0;			// Zera flag de interrupção do TC4
}


/*******************************
*
*		GLCD Limpar Tela
*
********************************/

void limpa_tela() {
	limpa_glcd(ESQ);
	limpa_glcd(DIR);
	conf_pag(0, ESQ);
	conf_pag(0, DIR);
}

/*******************************
*
*			Main
*
********************************/

void main(void)
{
	int aux = 0;

	Init_Device();
	setup();
	
	init_GLCD();
	limpa_tela();

//	esc_RAM_SPI(ENDERECO, 153);
//	aux = le_RAM_SPI(ENDERECO);
	printf_fast_f("\x01 %d", aux);

	while(1) {
		aux = le_RAM_SPI(ENDERECO);
		if(TECLA != TECS_OPEN) {
			esc_RAM_SPI(ENDERECO, TECLA);
			printf_fast_f("\x03 %d", aux);
			printf_fast_f("\x07 FIM");
		}
		else {
			printf_fast_f("\x03 %d", aux);
			printf_fast_f("\x07 TECS OPEN");
		}
	}
}






