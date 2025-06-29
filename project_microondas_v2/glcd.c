#include "def_pinos.h"
#include "stdio.h"

#define CS1 P2_0
#define CS2 P2_1
#define RS P2_2
#define RW P2_3
#define E P2_4
#define RST P2_5
#define DB P4
#define HI 1
#define LO 0
#define ESQ 0
#define DIR 1
#define CO 0
#define DA 1
#define NOP4() NOP();NOP();NOP();NOP()
#define NOP8() NOP4();NOP4()
#define NOP12() NOP4();NOP8()

volatile unsigned char conta_caractere = 0;
volatile __bit terminal_ativo = 0;

//Essa matriz contem dados para montar 96 caracteres (codigos ASCII 32 a 127)  
const char fonte[97][5] = {
	{0x00, 0x00, 0x00, 0x00, 0x00},// (space)
	{0x00, 0x00, 0x5F, 0x00, 0x00},// !
	{0x00, 0x07, 0x00, 0x07, 0x00},// "
	{0x14, 0x7F, 0x14, 0x7F, 0x14},// #
	{0x24, 0x2A, 0x7F, 0x2A, 0x12},// $
	{0x23, 0x13, 0x08, 0x64, 0x62},// %
	{0x36, 0x49, 0x55, 0x22, 0x50},// &
	{0x00, 0x05, 0x03, 0x00, 0x00},// '
	{0x00, 0x1C, 0x22, 0x41, 0x00},// (
	{0x00, 0x41, 0x22, 0x1C, 0x00},// )
	{0x08, 0x2A, 0x1C, 0x2A, 0x08},// *
	{0x08, 0x08, 0x3E, 0x08, 0x08},// +
	{0x00, 0x50, 0x30, 0x00, 0x00},// ,
	{0x08, 0x08, 0x08, 0x08, 0x08},// -
	{0x00, 0x30, 0x30, 0x00, 0x00},// .
	{0x20, 0x10, 0x08, 0x04, 0x02},// /
	{0x3E, 0x51, 0x49, 0x45, 0x3E},// 0
	{0x00, 0x42, 0x7F, 0x40, 0x00},// 1
	{0x42, 0x61, 0x51, 0x49, 0x46},// 2
	{0x21, 0x41, 0x45, 0x4B, 0x31},// 3
	{0x18, 0x14, 0x12, 0x7F, 0x10},// 4
	{0x27, 0x45, 0x45, 0x45, 0x39},// 5
	{0x3C, 0x4A, 0x49, 0x49, 0x30},// 6
	{0x01, 0x71, 0x09, 0x05, 0x03},// 7
	{0x36, 0x49, 0x49, 0x49, 0x36},// 8
	{0x06, 0x49, 0x49, 0x29, 0x1E},// 9
	{0x00, 0x36, 0x36, 0x00, 0x00},// :
	{0x00, 0x56, 0x36, 0x00, 0x00},// ;
	{0x00, 0x08, 0x14, 0x22, 0x41},// <
	{0x14, 0x14, 0x14, 0x14, 0x14},// =
	{0x41, 0x22, 0x14, 0x08, 0x00},// >
	{0x02, 0x01, 0x51, 0x09, 0x06},// ?
	{0x32, 0x49, 0x79, 0x41, 0x3E},// @
	{0x7E, 0x11, 0x11, 0x11, 0x7E},// A
	{0x7F, 0x49, 0x49, 0x49, 0x36},// B
	{0x3E, 0x41, 0x41, 0x41, 0x22},// C
	{0x7F, 0x41, 0x41, 0x22, 0x1C},// D
	{0x7F, 0x49, 0x49, 0x49, 0x41},// E
	{0x7F, 0x09, 0x09, 0x01, 0x01},// F
	{0x3E, 0x41, 0x41, 0x51, 0x32},// G
	{0x7F, 0x08, 0x08, 0x08, 0x7F},// H
	{0x00, 0x41, 0x7F, 0x41, 0x00},// I
	{0x20, 0x40, 0x41, 0x3F, 0x01},// J
	{0x7F, 0x08, 0x14, 0x22, 0x41},// K
	{0x7F, 0x40, 0x40, 0x40, 0x40},// L
	{0x7F, 0x02, 0x04, 0x02, 0x7F},// M
	{0x7F, 0x04, 0x08, 0x10, 0x7F},// N
	{0x3E, 0x41, 0x41, 0x41, 0x3E},// O
	{0x7F, 0x09, 0x09, 0x09, 0x06},// P
	{0x3E, 0x41, 0x51, 0x21, 0x5E},// Q
	{0x7F, 0x09, 0x19, 0x29, 0x46},// R
	{0x46, 0x49, 0x49, 0x49, 0x31},// S
	{0x01, 0x01, 0x7F, 0x01, 0x01},// T
	{0x3F, 0x40, 0x40, 0x40, 0x3F},// U
	{0x1F, 0x20, 0x40, 0x20, 0x1F},// V
	{0x7F, 0x20, 0x18, 0x20, 0x7F},// W
	{0x63, 0x14, 0x08, 0x14, 0x63},// X
	{0x03, 0x04, 0x78, 0x04, 0x03},// Y
	{0x61, 0x51, 0x49, 0x45, 0x43},// Z
	{0x00, 0x00, 0x7F, 0x41, 0x41},// [
	{0x02, 0x04, 0x08, 0x10, 0x20},// "\"
	{0x41, 0x41, 0x7F, 0x00, 0x00},// ]
	{0x04, 0x02, 0x01, 0x02, 0x04},// ^
	{0x40, 0x40, 0x40, 0x40, 0x40},// _
	{0x00, 0x01, 0x02, 0x04, 0x00},// `
	{0x20, 0x54, 0x54, 0x54, 0x78},// a
	{0x7F, 0x48, 0x44, 0x44, 0x38},// b
	{0x38, 0x44, 0x44, 0x44, 0x20},// c
	{0x38, 0x44, 0x44, 0x48, 0x7F},// d
	{0x38, 0x54, 0x54, 0x54, 0x18},// e
	{0x08, 0x7E, 0x09, 0x01, 0x02},// f
	{0x08, 0x14, 0x54, 0x54, 0x3C},// g
	{0x7F, 0x08, 0x04, 0x04, 0x78},// h
	{0x00, 0x44, 0x7D, 0x40, 0x00},// i
	{0x20, 0x40, 0x44, 0x3D, 0x00},// j
	{0x00, 0x7F, 0x10, 0x28, 0x44},// k
	{0x00, 0x41, 0x7F, 0x40, 0x00},// l
	{0x7C, 0x04, 0x18, 0x04, 0x78},// m
	{0x7C, 0x08, 0x04, 0x04, 0x78},// n
	{0x38, 0x44, 0x44, 0x44, 0x38},// o
	{0x7C, 0x14, 0x14, 0x14, 0x08},// p
	{0x08, 0x14, 0x14, 0x18, 0x7C},// q
	{0x7C, 0x08, 0x04, 0x04, 0x08},// r
	{0x48, 0x54, 0x54, 0x54, 0x20},// s
	{0x04, 0x3F, 0x44, 0x40, 0x20},// t
	{0x3C, 0x40, 0x40, 0x20, 0x7C},// u
	{0x1C, 0x20, 0x40, 0x20, 0x1C},// v
	{0x3C, 0x40, 0x30, 0x40, 0x3C},// w
	{0x44, 0x28, 0x10, 0x28, 0x44},// x
	{0x0C, 0x50, 0x50, 0x50, 0x3C},// y
	{0x44, 0x64, 0x54, 0x4C, 0x44},// z
	{0x00, 0x08, 0x36, 0x41, 0x00},// {
	{0x00, 0x00, 0x7F, 0x00, 0x00},// |
	{0x00, 0x41, 0x36, 0x08, 0x00},// }
	{0x08, 0x08, 0x2A, 0x1C, 0x08},// ->
	{0x08, 0x1C, 0x2A, 0x08, 0x08}, // <-
	{0x00, 0x07, 0x05, 0x07, 0x00}
};

unsigned char le_glcd(__bit cd, __bit cs){
	/* Questao 2 - Funcao que le um bit do lcd */

	unsigned char byte;

	RW = HI;
	CS1 = cs;
	CS2 = !cs;
	RS = cd;
	NOP4();

	E = HI;
	NOP8();

	SFRPAGE=CONFIG_PAGE;
	byte = DB;
	SFRPAGE=LEGACY_PAGE;
	NOP4();

	E = LO;
	NOP12();
	return (byte);

}

void esc_glcd(unsigned char byte, __bit cd, __bit cs){
	/* Questao 3 - Escreve um bit no lcd */
	
	while(le_glcd(CO, cs) & 0x80); // Espera enquanto BUSY for 1
	
	RW = LO;
	CS1 = cs;
	CS2 = !cs;
	RS = cd;
	SFRPAGE=CONFIG_PAGE;
	DB = byte;
	SFRPAGE=LEGACY_PAGE;
	NOP4();

	E = HI;
	NOP12();

	E = LO;
	SFRPAGE=CONFIG_PAGE;
	DB = 0xff; // Para que a porta funcione como um entrada de novo sem nenhum problema
	SFRPAGE=LEGACY_PAGE;
	RW = HI; // RW == P2_3 sao usados pelo GLCD e precisa ser setado 1 para ser usado por outra funcao de outro componente
	NOP12();
}

void ini_glcd(){
	/* Questao 4 - Iniciliza o LCD grafico */
	unsigned char cs = LO;

	// Definir condicoes iniciais dos pinos do LCD
	E = LO;
	RST = HI;
	CS1 = HI;
	CS2 = HI;
	SFRPAGE=CONFIG_PAGE;
	DB = 0xff;
	SFRPAGE=LEGACY_PAGE;
	
	while(cs<2){
		// Aguardar o Reset por power up
		while(le_glcd(CO, cs) & 0x10);

		// Ligar o display
		esc_glcd(0x3f, CO, cs);
		
		// zerar os indicadores de posicao (x,y,z)
		esc_glcd(0x40, CO, cs); // Y
		esc_glcd(0xb8, CO, cs); // X
		esc_glcd(0xc0, CO, cs); // Z
		cs++;
	}
}

void conf_Y(unsigned char y, __bit cs){
	/* Questao 5 - Define o endereco Y, correspondente a um pixel do glcd */
	
	y &= 0x3f; // para limitar o valor de Y de 0 ate 63
	esc_glcd(0x40 | y, CO, cs);
}


void conf_pag(unsigned char pag, __bit cs){
	/* Questao 5 - Define o endereco X, correspondente a uma pagina do glcd */

	pag &= 0x07; // Para limitar o valor de X de 0 ate 7
	esc_glcd(0xb8 | pag, CO, cs);
}

void limpa_glcd(__bit cs){
	/* Questao 6 - Apaga metade do GLCD */

	unsigned char x, y;

	for(x=0; x<8; x++){
		conf_pag(x, cs);
		conf_Y(0, cs);
		for(y=0; y<64; y++){
			esc_glcd(0x00, DA, cs);
		}
	}
}

unsigned char caractere_para_ascii(unsigned char cod_ascii){
	/* Converte ASCII para os indices da matriz fonte[96][5] */

	if(cod_ascii >= 32 && cod_ascii <= 127){
		return cod_ascii - 32;
	}else if(cod_ascii == 176){
		return 96;
	}
	return 0;
}

void escreve_caractere(char c, __bit cs){
	/* Escreve um caractere na tela seguido de tres espacos em branco */

	unsigned char linha = caractere_para_ascii(c);

	esc_glcd(fonte[linha][0], DA, cs);
	esc_glcd(fonte[linha][1], DA, cs);
	esc_glcd(fonte[linha][2], DA, cs);
	esc_glcd(fonte[linha][3], DA, cs);
	esc_glcd(fonte[linha][4], DA, cs);
	esc_glcd(0x00, DA, cs);
	esc_glcd(0x00, DA, cs);
	esc_glcd(0x00, DA, cs);
}

void putchar(char c){
	/* 
	Funcao usada por printf_fast_f par imprimir os caracteres
	Se o caractere lido for um inteiro de 0 ate 7, a linha utilizada pelo glcd eh definida
	Imprime ate 16 caracteres por linha (1 linha == 2 paginas == 128 pixels)
	*/
	__bit lado;
	WDTCN = 0xa5;

	if(c<=8){
		conf_pag(c-1, ESQ);
		conf_Y(0, ESQ);
		conf_pag(c-1, DIR);
		conf_Y(0, DIR);
		conta_caractere = 0;
		terminal_ativo = 0;

	}else if(c == 9 || terminal_ativo == 1){
		terminal_ativo = 1;
		SBUF0 = c;
		while(TI0==0);
		TI0 = 0;
	
	}else{
		if(conta_caractere<8){
			lado = ESQ;
		}else{
			lado = DIR;
		}

		escreve_caractere(c, lado);
		conta_caractere++;
	}
}