
// Alunos: Rafael Torres Nantes

// Trabalho final

#include "stdio.h"
#include "config.c"
#include "def_pinos.h"
#include "glcd.c"
#include "ram_spi.c"
#include "delay.c"


#define END_RESIDENCIA_1 0x10
#define END_RESIDENCIA_2 0x20
#define END_RESIDENCIA_3 0x30
#define END_RESIDENCIA_4 0x40

__code const unsigned char end_residencia[4] = {0x10, 0x20, 0x30, 0x40};

/*******************************
*
*			Limpa GLCD
*
********************************/

void clean_glcd() {
	limpa_glcd(ESQ);
	limpa_glcd(DIR);
	conf_pag(0, ESQ);
	conf_pag(0, DIR);
}

/*******************************
*
*			Bluetooth
*
********************************/

volatile __bit flag_tecla = 0;
volatile unsigned char tecla = 0;

void isr_UART0(void) __interrupt 4{
	// Interrupcao UART
	if(RI0==1){
		tecla = SBUF0;
		flag_tecla = 1;
		RI0 = 0;
	}
}

/*******************************
*
*			BUZZER
*
********************************/
void ligar_buzzer() {

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

/***************************************************
* 
*          Funções de Checkar se existe uma Senha
*
****************************************************/

unsigned int check_locked(unsigned int house_number) {

	//flagLocked == 1 : A residencia tem uma senha
	//flagLocked == 0 : A residencia NÃO tem uma senha
	unsigned int flagLocked = 0;
	unsigned char dado;

	dado = le_RAM_SPI(end_residencia[house_number - 1]); 

	if(dado == 0xFF) {
		return flagLocked;
	}

	flagLocked = 1;
	return flagLocked;
}

/*******************************
*
*     Funções de Start System
*
********************************/
unsigned int init_residencial_system() {

	//flagError == 1 : Não consegui inicializar a Residencia com Senha Padrão (0xFF)
	//flagError == 0 : A Senha Padrão foi inicializada com (0xFF)

	unsigned int flagError = 0;
	unsigned char dado;

	esc_RAM_SPI(END_RESIDENCIA_1, 0xFF); 
	dado = le_RAM_SPI(END_RESIDENCIA_1); 

	if(dado != 0xFF) {
		printf_fast_f("\x01 \nERRO NA RESIDENCIA 01 !!!!\n");
		flagError = 1;
		return flagError;
	}

	esc_RAM_SPI(END_RESIDENCIA_2, 0xFF);
	dado = le_RAM_SPI(END_RESIDENCIA_2); 

	if(dado != 0xFF) {
		printf_fast_f("\x01 \nERRO NA RESIDENCIA 02 !!!!\n");
		flagError = 1;
		return flagError;
	}

	esc_RAM_SPI(END_RESIDENCIA_3, 0xFF); 
	dado = le_RAM_SPI(END_RESIDENCIA_1); 

	if(dado != 0xFF) {
		printf_fast_f("\x01 \nERRO NA RESIDENCIA 03 !!!!\n");
		flagError = 1;
		return flagError;
	}

	esc_RAM_SPI(END_RESIDENCIA_4, 0xFF); 
	dado = le_RAM_SPI(END_RESIDENCIA_4); 

	if(dado != 0xFF) {
		printf_fast_f("\x01 \nERRO NA RESIDENCIA 04 !!!!\n");
		flagError = 1;
		return flagError;
	}

	printf_fast_f("\x01 \nFuncionou!!!!\n");
	return flagError;
}


/*******************************
* 
*     Menu para Registrar Alarme
*
********************************/

void register_menu(unsigned int end) {
	

	if (check_locked(end)) {
		printf_fast_f("Pressione uma residência válida (UNLOCKED)\n");
		flag = 0;
		printf_fast_f("\n");
	}

	else {
	// Printando o nível lógico da P1 no terminal serial enquanto a tecla 'a' estiver pressionado
		while (1) {
			if (flag) {
				if (byte == 'a') {
					printf_fast_f("Digite um PIN de 4 Dígitos: \r", );
					esc_RAM_SPI(end, 0xFF);
					// Printando na mesma linha com o \r mas sem mostrar o cursor
				}
				
				else {
					flag = 0;
					printf_fast_f("\n");
					break;
				}
			}
		}
	}
	
}

/*******************************
* 
*          Main Principal
*
********************************/

void main_menu() {

	while(1) 
	
	{
		if (putchar('m'), 1) // Caso pressione o char 'm' abre um menu com as opções de escrita no terminal serial (apenas uma vez)
		{
			while (1) // Loop infinito para o menu
			{
				if (flag) // Se a flag for setada, então o caractere foi recebido
				{
					switch (byte) // Switch case para as opções do menu (a, b, c)
					{
					case 'm': // Caso pressione o char 'm' abre um menu com as opções de escrita no terminal serial novamente
						printf_fast_f("Residências Disponíveis:\n");
						
						if (!check_locked(END_RESIDENCIA_1)) {
							printf_fast_f("a - Residência01 - UNLOCK\n");
						}
						else {
							printf_fast_f("a - Residência01 - LOCKED\n");
						}

						if (!check_locked(END_RESIDENCIA_2)) {
							printf_fast_f("b - Residência02 - UNLOCK\n");
						}
						else {
							printf_fast_f("b - Residência02 - LOCKED\n");
						}

						if (!check_locked(END_RESIDENCIA_3)) {
							printf_fast_f("c - Residência03 - UNLOCK\n");
						}
						else {
							printf_fast_f("c - Residência03 - LOCKED\n");
						}

						if (!check_locked(END_RESIDENCIA_4)) {
							printf_fast_f("c - Residência04 - UNLOCK\n");
						}
						else {
							printf_fast_f("c - Residência04 - LOCKED\n");
						}

						flag = 0;
						printf_fast_f("\n");
					
					case 'a': // Caso pressione a tecla 'a', o programa irá escrever no terminal serial os níveis lógicos da porta P1
						register_menu(END_RESIDENCIA_1)
					
					case 'b': // Caso pressione a tecla 'a', o programa irá escrever no terminal serial os níveis lógicos da porta P1
						register_menu(END_RESIDENCIA_2)

					case 'c': // Caso pressione a tecla 'a', o programa irá escrever no terminal serial os níveis lógicos da porta P1
						register_menu(END_RESIDENCIA_3)

					case 'd': // Caso pressione a tecla 'a', o programa irá escrever no terminal serial os níveis lógicos da porta P1
						register_menu(END_RESIDENCIA_4)

					default: // Caso pressione um char diferente dos anteriores, o programa irá pedir para pressionar um char válido
						printf_fast_f("Pressione um char valido (a, b, c, d)\n");
						flag = 0;
						printf_fast_f("\n");
					}
				}
			}
		}
	}
}


/*******************************
* 
*          Main
*
********************************/
void main(void) {

	unsigned int flagErrorStart = 0;
	unsigned int flagErrorX = 0;

	Init_Device();
	SFRPAGE=LEGACY_PAGE;

	ini_glcd();
	clean_glcd();

	printf_fast_f('\x00 \nSTART\n');


	delay_ms(3000);

	flagErrorStart = init_residencial_system();

	if(flagErrorStart) {
		printf_fast_f('\x01 \nError: SystemOff!\n')
	}

	delay_ms(3000);

	while(1) 
	{
		main_menu();
	}
	
}