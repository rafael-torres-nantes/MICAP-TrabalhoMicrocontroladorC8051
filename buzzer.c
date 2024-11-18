#include "def_pinos.h"
#include "delay.c"

#define buzzer P2_7

void ligar_buzzer(unsigned int ciclos, unsigned int meio_periodo) {
    while (ciclos) {
        buzzer = 0;
        delay_us(meio_periodo);
        buzzer = 1;
        delay_us(meio_periodo);
        ciclos--;
    }
}