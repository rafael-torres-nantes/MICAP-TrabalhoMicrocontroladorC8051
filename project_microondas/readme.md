# 🍽️ Sistema de Micro-ondas com C8051F040

## 🔍 Descrição do Projeto
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

## 💻 Instruções de Configuração e Implementação
1. **Definição de Sensores:** Selecione os sensores desejados (teclado, sensor de porta, etc.).
2. **Desenho do Esquemático:** Construa o circuito no Proteus ou em outra ferramenta de simulação.
3. **Desenvolvimento do Código:** Implemente o firmware utilizando C na IDE da Silicon Labs (Simplicity Studio).

## 🚀 Próximos Passos
- Configurar e testar os sensores de entrada.
- Implementar o controle do motor de passo.
- Ativar e testar o Watchdog Timer.
- Integrar o módulo Bluetooth para notificações.

## 📚 Documentação Adicional
Para mais informações sobre o microcontrolador C8051F040 e seus periféricos, consulte a [documentação oficial da Silicon Labs](https://www.silabs.com/documents/public/data-sheets/C8051F040.pdf).
