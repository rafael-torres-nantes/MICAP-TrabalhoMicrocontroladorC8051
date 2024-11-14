# 📡 Sistema de Alarme Residencial com C8051F040

## 🔍 Descrição do Projeto
Este projeto consiste na criação de um **Sistema de Alarme Residencial** utilizando o microcontrolador **C8051F040**, que monitora a segurança de uma residência. O sistema detecta intrusões, aciona alarmes sonoros, exibe mensagens em um display, e armazena logs de eventos, além de enviar notificações via Bluetooth.

---

## ✅ Requisitos do Projeto
| Requisito                                  | Status       |
|--------------------------------------------|--------------|
| **2 Dispositivos de Entrada**              | ❌ Pendente  |
| **2 Dispositivos de Saída**                | ✅ LCD Gráfico, Buzzer |
| **1 Dispositivo de Armazenamento**         | ✅ RAM SPI   |
| **1 Dispositivo de Comunicação**           | ❌ Bluetooth |
| **1 Dispositivo Atuador**                  | ❌ Motor de Passo |
| **Watchdog Timer Ativado**                 | ❌ Pendente  |

---

## 🎯 Objetivo
Desenvolver um sistema de alarme que utiliza o microcontrolador **C8051F040** para:
- Monitorar sensores de movimento e portas/janelas.
- Acionar um **buzzer** em caso de intrusão.
- Exibir mensagens de status em um **LCD gráfico**.
- Armazenar logs em **RAM SPI**.
- Enviar notificações via **Bluetooth**.
- Controlar dispositivos como um **motor de passo** para travamento automático.

---

## 🛠️ Componentes Utilizados

### 1. **Dispositivos de Entrada (Sensores)**
- **Sensor PIR (Infravermelho Passivo)**: Detecta movimento.
- **Sensor de Portas/Janelas**: Monitora a abertura de portas e janelas.

### 2. **Dispositivos de Saída**
- **LCD Gráfico**: Exibe mensagens do sistema, como status e alertas.
- **Buzzer**: Emite um alerta sonoro em caso de intrusão.

### 3. **Dispositivo de Armazenamento**
- **RAM SPI**: Armazena logs dos eventos (ativação/desativação do alarme).

### 4. **Dispositivo de Comunicação**
- **Bluetooth**: Envia notificações para smartphones e permite configuração remota.

### 5. **Dispositivo Atuador**
- **Motor de Passo**: Controla a abertura de travas ou portões.

### 6. **Watchdog Timer**
- Monitora o funcionamento do sistema e reinicia o microcontrolador em caso de falhas.

---

## 🔄 Funcionamento do Sistema

1. **Monitoramento de Sensores**:
   - Sensores de entrada (PIR, portas/janelas) enviam sinais ao microcontrolador.
2. **Alerta em Caso de Intrusão**:
   - Aciona o **buzzer** e exibe alertas no **LCD**.
   - Registro do evento na **RAM SPI**.
   - Envia notificações via **Bluetooth** (se configurado).
3. **Controle do Motor de Passo**:
   - Utilizado para travar ou destravar portas automaticamente.
4. **Watchdog Timer**:
   - Garante o funcionamento contínuo, reiniciando o sistema em caso de travamento.

---

## 🔌 Esquemático de Conexões

| Componente          | Pinos do C8051F040        | Notas                           |
|---------------------|----------------------------|--------------------------------|
| **Sensor PIR**      | Pino de I/O Digital        | Configurado para detectar movimento. |
| **Sensor de Porta** | Pino de I/O Digital        | Configurado como interruptor.   |
| **LCD Gráfico**     | SPI (MOSI, MISO, SCLK, CS) | Interface SPI para comunicação. |
| **Buzzer**          | Pino de I/O Digital        | Controlado por sinal PWM.       |
| **RAM SPI**         | SPI (MOSI, MISO, SCLK, CS) | Para armazenamento de dados.    |
| **Bluetooth HC-05** | UART (TX, RX)              | Comunicação serial.             |
| **Motor de Passo**  | Pinos PWM ou I/O Digital   | Controle de passos do motor.    |

---

## 💻 Instruções de Configuração e Implementação

1. **Definição de Sensores**:
   - Selecione os sensores desejados (PIR, sensores magnéticos, etc.).
2. **Desenho do Esquemático**:
   - Construa o circuito no **Proteus** ou em outra ferramenta de simulação.
3. **Desenvolvimento do Código**:
   - Implemente o firmware utilizando **C** na **IDE da Silicon Labs (Simplicity Studio)**.

---

## 🚀 Próximos Passos
- **Configurar e testar os sensores de entrada**.
- **Implementar o controle do motor de passo**.
- **Ativar e testar o Watchdog Timer**.
- **Integrar o módulo Bluetooth para notificações**.
  
---

## 📚 Documentação Adicional
Para mais informações sobre o microcontrolador **C8051F040** e seus periféricos, consulte a [documentação oficial da Silicon Labs](https://www.silabs.com/).
