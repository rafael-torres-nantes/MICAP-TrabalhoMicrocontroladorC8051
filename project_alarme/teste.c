#include "C8051F040_defs.h"
#include "def_pinos.h"
#include "glcd.c"
#include "ram_spi.c"
#include "delay.c"
#include "motor_passo.c"
#include "buzzer.c"

#define buzzer P2_7
#define LED P2_0
#define MOTOR_PASSO_R1 P2_1
#define MOTOR_PASSO_R2 P2_2
#define MOTOR_PASSO_R3 P2_3
#define MOTOR_PASSO_R4 P2_4

#define CASA_DESTRANCADA 0xFF

__code const unsigned char end_residencia[4] = {0x10, 0x20, 0x30, 0x40};
volatile __bit flag_tecla = 0;
volatile unsigned char tecla = 0;


void isr_UART0(void) __interrupt 4 {
    if (RI0 == 1) {
        tecla = SBUF0;
        flag_tecla = 1;
        RI0 = 0;
    }
}

unsigned int check_locked(unsigned int house_number) {
    unsigned char dado = le_RAM_SPI(end_residencia[house_number - 1]);
    return dado != CASA_DESTRANCADA;
}

unsigned int init_residencial_system() {
    unsigned int flagError = 0;
    unsigned char dado;

    for (int i = 1; i <= 4; i++) {
        controlar_motor_passo(i, 0);
    }
    LED = 0;

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

void test_sensors() {
    printf_fast_f("Testing sensors...\n");
    // Simulate sensor input and check responses
    // Example: Check PIR sensor
    if (PIR_SENSOR) {
        printf_fast_f("PIR sensor detected motion.\n");
    } else {
        printf_fast_f("PIR sensor did not detect motion.\n");
    }
    // Add more sensor tests as needed
}

void test_outputs() {
    printf_fast_f("Testing outputs...\n");
    // Test LCD
    ini_glcd();
    clean_glcd();
    printf_fast_f("LCD initialized and cleared.\n");

    // Test Buzzer
    ligar_buzzer(3, 1500);
    printf_fast_f("Buzzer tested.\n");
}

void test_storage() {
    printf_fast_f("Testing RAM SPI...\n");
    unsigned char test_data = 0xAA;
    esc_RAM_SPI(0x00, test_data);
    unsigned char read_data = le_RAM_SPI(0x00);
    if (read_data == test_data) {
        printf_fast_f("RAM SPI test passed.\n");
    } else {
        printf_fast_f("RAM SPI test failed.\n");
    }
}

void test_communication() {
    printf_fast_f("Testing Bluetooth...\n");
    // Simulate Bluetooth communication
    // Example: Send and receive data
    SBUF0 = 'A';
    while (!TI0);
    TI0 = 0;
    printf_fast_f("Bluetooth communication tested.\n");
}

void test_actuator() {
    printf_fast_f("Testing motor de passo...\n");
    controlar_motor_passo(1, 1);
    delay_ms(1000);
    controlar_motor_passo(1, 0);
    printf_fast_f("Motor de passo tested.\n");
}

void test_watchdog() {
    printf_fast_f("Testing Watchdog Timer...\n");
    WDTCN = 0xA5; // Refresh watchdog timer
    printf_fast_f("Watchdog Timer tested.\n");
}

void main(void) {
    Init_Device();
    SFRPAGE = LEGACY_PAGE;

    printf_fast_f("\x00 \nSTART\n");
    delay_ms(3000);

    if (init_residencial_system()) {
        printf_fast_f("\x01 \nError: System Off!\n");
        return;
    }

    test_sensors();
    test_outputs();
    test_storage();
    test_communication();
    test_actuator();
    test_watchdog();

    printf_fast_f("All tests completed.\n");
}