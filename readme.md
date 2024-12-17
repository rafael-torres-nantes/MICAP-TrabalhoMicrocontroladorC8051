# 🚨 Sistema de Alarme Residencial e Micro-ondas com C8051F040 🍽️

## 👨‍💻 Projeto desenvolvido por: 
[Rafael Torres Nantes](https://github.com/rafael-torres-nantes)

## Índice

* [📚 Descrição do Projeto](#-descrição-do-projeto)
* [✅ Requisitos do Projeto](#-requisitos-do-projeto)
* [🎯 Objetivo](#-objetivo)
* [🛠️ Componentes Utilizados](#%EF%B8%8F-componentes-utilizados)
* [🔄 Funcionamento do Sistema](#-funcionamento-do-sistema)
* [🔌 Esquemático de Conexões](#-esquemático-de-conexões)
* [📁 Estrutura do Projeto](#estrutura-do-projeto)
* [📌 Como executar o projeto](#como-executar-o-projeto)
* [🚀 Próximos Passos](#-próximos-passos)
* [📚 Documentação Adicional](#-documentação-adicional)

## 📚 Descrição do Projeto

Este projeto consiste na criação de um Sistema de Micro-ondas utilizando o microcontrolador C8051F040, que controla o funcionamento de um micro-ondas. O sistema gerencia o tempo de cozimento, potência e segurança, exibindo informações em um display e emitindo alertas sonoros.

## ✅ Requisitos do Projeto

| Requisito                     | Status                          |
|-------------------------------|---------------------------------|
| 2 Dispositivos de Entrada     | ✅ Teclado e Sensor de Porta     |
| 2 Dispositivos de Saída       | ✅ LCD Gráfico e Buzzer          |
| 1 Dispositivo de Armazenamento| ✅ RAM SPI                       |
| 1 Dispositivo de Comunicação  | ✅ Bluetooth                     |
| 1 Dispositivo Atuador         | ✅ Motor de Passo                |
| Watchdog Timer Ativado        | ✅ Pendente                      |

## 🎯 Objetivo

Desenvolver um sistema de micro-ondas que utiliza o microcontrolador C8051F040 para:
- Controlar o tempo e potência de cozimento.
- Monitorar a porta do micro-ondas para segurança.
- Exibir informações de status em um LCD gráfico.
- Emitir alertas sonoros com um buzzer.
- Armazenar configurações e logs em RAM SPI.
- Enviar notificações via Bluetooth.
- Controlar o motor de passo para o prato giratório.

## 🛠️ Componentes Utilizados

1. **Dispositivos de Entrada (Sensores)**
    - **Teclado:** Permite a entrada de tempo e potência de cozimento.
    - **Sensor de Porta:** Monitora a abertura e fechamento da porta do micro-ondas.
2. **Dispositivos de Saída**
    - **LCD Gráfico:** Exibe informações do sistema, como tempo e potência.
    - **Buzzer:** Emite um alerta sonoro ao término do cozimento.
3. **Dispositivo de Armazenamento**
    - **RAM SPI:** Armazena configurações e logs de uso.
4. **Dispositivo de Comunicação**
    - **Bluetooth:** Permite a configuração remota e envio de notificações.
5. **Dispositivo Atuador**
    - **Motor de Passo:** Controla o movimento do prato giratório.
6. **Watchdog Timer**
    - Monitora o funcionamento do sistema e reinicia o microcontrolador em caso de falhas.

## 🔄 Funcionamento do Sistema

- **Entrada de Dados:** O usuário insere o tempo e potência de cozimento através do teclado.
- **Monitoramento de Segurança:** O sensor de porta garante que o micro-ondas só funcione com a porta fechada.
- **Cozimento:** O sistema controla o tempo e potência de cozimento, exibindo informações no LCD. Ao término do cozimento, o buzzer emite um alerta sonoro.
- **Armazenamento e Comunicação:** Configurações e logs são armazenados na RAM SPI. Notificações podem ser enviadas via Bluetooth.
- **Controle do Motor de Passo:** O motor de passo controla o movimento do prato giratório.
- **Watchdog Timer:** Garante o funcionamento contínuo, reiniciando o sistema em caso de travamento.

## 🔌 Esquemático de Conexões

| Componente       | Pinos do C8051F040       | Notas                              |
|------------------|--------------------------|------------------------------------|
| Teclado          | Pinos de I/O Digital     | Entrada de tempo e potência.       |
| Sensor de Porta  | Pino de I/O Digital      | Monitora a abertura da porta.      |
| LCD Gráfico      | SPI (MOSI, MISO, SCLK, CS)| Interface SPI para comunicação.    |
| Buzzer           | Pino de I/O Digital      | Controlado por sinal PWM.          |
| RAM SPI          | SPI (MOSI, MISO, SCLK, CS)| Para armazenamento de dados.       |
| Bluetooth HC-05  | UART (TX, RX)            | Comunicação serial.                |
| Motor de Passo   | Pinos PWM ou I/O Digital | Controle do prato giratório.       |

## 📁 Estrutura do Projeto

A estrutura do projeto é organizada da seguinte maneira:

```
.
├── project_alarme/
│   ├── buzzer.c
│   ├── C8051F040_defs.h
│   ├── config.c
│   ├── def_pinos.h
│   ├── delay.c
│   ├── glcd.c
│   ├── main.c
│   ├── motor_passo.c
│   ├── ram_spi.c
│   ├── readme.md
│   └── teste.c
├── project_microondas/
│   ├── C8051F040_defs.h
│   ├── config.c
│   ├── connection_uart.h
│   ├── def_pinos.h
│   ├── delay.h
│   ├── display.c
│   ├── fonte.c
│   ├── main.c
│   ├── main.asm
│   ├── main.lk
│   ├── main.lst
│   ├── main.mem
│   ├── main.omf
│   ├── main.rel
│   ├── main.rst
│   ├── mem_eeprom.c
│   ├── output_glcd.c
│   └── readme.md
├── .gitignore
└── readme.md
```

## 📌 Como executar o projeto

Para executar o projeto localmente, siga as instruções abaixo:

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/rafael-torres-nantes/microondas-c8051f040.git
   ```

2. **Instale as dependências:**
   ```bash
   cd project_microondas
   ```

3. **Compile e carregue o código no microcontrolador:**
   Utilize a IDE da Silicon Labs (Simplicity Studio) para compilar e carregar o código no microcontrolador C8051F040.

4. **Conecte os componentes conforme o esquemático de conexões:**
   Siga o esquemático de conexões para conectar todos os componentes ao microcontrolador.

## 🚀 Próximos Passos

- **Configurar e testar os sensores de entrada.**
- **Implementar o controle do motor de passo.**
- **Ativar e testar o Watchdog Timer.**
- **Integrar o módulo Bluetooth para notificações.**

## 📚 Documentação Adicional

Para mais informações sobre o microcontrolador C8051F040 e seus periféricos, consulte a [documentação oficial da Silicon Labs](https://www.silabs.com/documents/public/data-sheets/C8051F040.pdf).

## Exemplos de Código

### Configuração Inicial

```c
#include "output_glcd.h"
#include "delay.h"
#include "mem_spi.h"

#define MOTOR P1_7
#define MICROONDAS P0_7

void setup() {
    // Configurações iniciais do sistema
    UART_Init();
    SPI_Init();
    GLCD_Init();
    Timer_Init();
    Motor_Init();
}
```

### Contagem Regressiva

```c
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
        delay_ms(1000); // Espera 1 segundo
        tempoRestante--;
    }
    MOTOR = 0;
    MICROONDAS = 0;
    ligar_buzzer();
    printf_fast_f("\x03 Pronto");
}
```

### Leitura do Teclado

```c
unsigned char le_tec(void) {
    unsigned char aux;
    switch (~P1) {
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
```

### Controle do Motor de Passo

```c
void Motor_Init() {
    // Configuração inicial do motor de passo
    P1MDOUT |= 0x80; // Configura P1.7 como saída
    MOTOR = 0; // Desliga o motor inicialmente
}

void Motor_Control(int estado) {
    if (estado) {
        MOTOR = 1; // Liga o motor
    } else {
        MOTOR = 0; // Desliga o motor
    }
}
```

### Inicialização do GLCD

```c
void GLCD_Init() {
    unsigned char cs = LO;

    // Definir condições iniciais dos pinos do LCD
    E = LO;
    RST = HI;
    CS1 = HI;
    CS2 = HI;
    SFRPAGE = CONFIG_PAGE;
    DB = 0xff;
    SFRPAGE = LEGACY_PAGE;

    while (cs < 2) {
        // Aguardar o Reset por power up
        while (le_glcd(CO, cs) & 0x10);

        // Ligar o display
        esc_glcd(0x3f, CO, cs);

        // Zerar os indicadores de posição (x, y, z)
        esc_glcd(0x40, CO, cs); // Y
        esc_glcd(0xb8, CO, cs); // X
        esc_glcd(0xc0, CO, cs); // Z
        cs++;
    }
}
```

### Escrita no GLCD

```c
void escreve_caractere(char c, __bit cs) {
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
```

### Controle do Buzzer

```c
void ligar_buzzer() {
    // Ativa o buzzer
    buzzer = 1;
    delay_ms(500); // Mantém o buzzer ligado por 500ms
    buzzer = 0;
}
```

### Leitura da RAM SPI

```c
unsigned char le_RAM_SPI(unsigned int end) {
    unsigned char dado, end_l = end, end_h = end >> 8;

    CS = LO;

    SPI0DAT = 0x03;
    while (TXBMT == 0);

    SPI0DAT = end_h;
    while (TXBMT == 0);

    SPI0DAT = end_l;
    while (TXBMT == 0);

    SPI0DAT = 0x00;
    while (TXBMT == 0);

    dado = SPI0DAT;
    CS = HI;

    return dado;
}
```

### Escrita na RAM SPI

```c
void esc_RAM_SPI(unsigned int end, unsigned char dado) {
    unsigned char end_l = end, end_h = end >> 8;

    CS = LO;

    SPI0DAT = 0x02;
    while (TXBMT == 0);

    SPI0DAT = end_h;
    while (TXBMT == 0);

    SPI0DAT = end_l;
    while (TXBMT == 0);

    SPI0DAT = dado;
    while (TXBMT == 0);

    SPIF = 0; // Reseta valor para receber bit flag
    CS = HI;
}
```

### Configuração do Timer

```c
void Timer_Init() {
    TCON = 0x10; // Configura o Timer 1
    TMOD = 0x20; // Modo 2 (8-bit auto-reload)
    TH1 = 0xFD;  // Baud rate 9600
    TR1 = 1;     // Inicia o Timer 1
}
```

### Inicialização do UART

```c
void UART_Init() {
    SCON = 0x50; // Configura UART em modo 1 (8-bit UART)
    PCON |= 0x80; // Baud rate duplo
    Timer_Init(); // Inicializa o Timer 1 para baud rate
}
```

### Leitura do Sensor de Porta

```c
unsigned char le_sensor_porta(void) {
    return P1 & 0x01; // Retorna o estado do sensor de porta (P1.0)
}
```
