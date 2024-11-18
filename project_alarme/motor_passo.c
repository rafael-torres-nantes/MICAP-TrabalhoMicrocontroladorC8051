#include "def_pinos.h"

#define MOTOR_PASSO_R1 P2_1
#define MOTOR_PASSO_R2 P2_2
#define MOTOR_PASSO_R3 P2_3
#define MOTOR_PASSO_R4 P2_4

void controlar_motor_passo(unsigned char motor, unsigned char estado) {
    switch (motor) {
        case 1: MOTOR_PASSO_R1 = estado; break;
        case 2: MOTOR_PASSO_R2 = estado; break;
        case 3: MOTOR_PASSO_R3 = estado; break;
        case 4: MOTOR_PASSO_R4 = estado; break;
    }
}