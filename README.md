# Projeto: Controle de Servomotor por PWM com Raspberry Pi Pico

## 📌 Descrição
Este projeto implementa o controle de um servomotor utilizando o microcontrolador Raspberry Pi Pico W, configurado no simulador Wokwi. O sistema utiliza o módulo PWM para ajustar o ângulo do servomotor, com movimentação suave entre 0 e 180 graus. Além disso, um LED é utilizado como indicador visual durante a movimentação do motor.

## 🎯 Funcionalidades
- Configuração do PWM na GPIO 22 com frequência de 50Hz (período de 20ms).
- Ajuste do ciclo de trabalho para 500µs (0º), 1.470µs (90º) e 2.400µs (180º), com permanência de 5 segundos em cada posição.
- Movimentação suave entre 0º e 180º, com incremento/decremento de 5µs e atraso de 10ms.
- Indicação com LED no GPIO 12 durante a movimentação do servomotor.

## 🛠 Requisitos

- Raspberry Pi Pico W (simulado no Wokwi)
- Servomotor (micro servo padrão)
- LED indicador (GPIO 12)

- **Ferramentas:**
  - SDK do Raspberry Pi Pico
  - Simulador **Wokwi** (integrado no Vs Code)
  - Editor de código **VS Code**
  - CMake e Ninja para compilação

## Configuração dos Pinos

| Componente | GPIO |
|------------|------|
| Servomotor | GPIO 22 |
| LED RGB Azul | GPIO 12 |

## 🚀 Como Executar
1. **Clonar o repositório**
   ```bash
   git clone https://github.com/Anamacario/control-pwm.git
   cd control-pwm
   ```
2. **Compilar e carregar no Raspberry Pi Pico**
   - Conectar a placa ao computador
   - Compilar o código e copiar o arquivo `.uf2` para a bitdoglab

3. **Executar no Wokwi**
   - Abrir o simulador Wokwi integrado no vs code e dar play no projeto
   - Observar a movimentação do servomotor  no simulador e a indicação do LED na placa

## Implementação Técnica
- Configuração do PWM: O servomotor é controlado variando o ciclo de trabalho do PWM na GPIO 22.
- Movimentação Suave: A flange do servo se desloca de 0 a 180 graus em incrementos de 5µs.
- Indicação Visual: O LED no GPIO 12 acende durante a movimentação do servo.

## 🔍 Testes Realizados
✅ Mudança de ângulo do servomotor para 0º, 90º e 180º com espera de 5s
✅ Movimentação suave entre 0º e 180º
✅ Indicação visual com LED

## 🎥 Entrega e Demonstração

1. **Código-fonte**: Disponível no repositório GitHub com documentação e organização.
2. **Vídeo Demonstrativo**:
   - Demonstração em execução na placa **BitDogLab**.
   - Click [AQUI](https://drive.google.com/file/d/1VnBKUoHLzP_I1nmofblv8fnGvcI05rS7/view?usp=sharing) para acessar o link do vídeo de apresentação.


