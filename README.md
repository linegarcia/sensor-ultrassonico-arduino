```markdown id="d8sk3f"
# 🔍 Sistema de Varredura Ultrassônica com Arduino

Projeto desenvolvido utilizando Arduino Uno, sensor ultrassônico HC-SR04, servo motor, LEDs e buzzer para criar um sistema de varredura capaz de detectar obstáculos em diferentes direções.

O funcionamento do projeto simula o comportamento básico de radares e sensores inteligentes, realizando leituras contínuas do ambiente através da movimentação automática do sensor ultrassônico.

---

# 🧠 Como o Sistema Funciona

O sensor ultrassônico HC-SR04 trabalha emitindo ondas sonoras em alta frequência que não podem ser ouvidas pelo ser humano.

## 📡 Etapas do funcionamento:

1. O Arduino envia um pulso para o pino **Trigger** do sensor.
2. O sensor emite uma onda ultrassônica.
3. Quando essa onda atinge um objeto, ela é refletida.
4. O sinal refletido retorna ao sensor pelo pino **Echo**.
5. O Arduino calcula o tempo entre envio e recebimento da onda.
6. Com esse tempo, é possível calcular a distância do objeto.

A fórmula utilizada é:

:contentReference[oaicite:0]{index=0}

Onde:

- **d** = distância
- **t** = tempo de ida e volta da onda
- **v** = velocidade do som

A divisão por 2 acontece porque o sinal percorre o caminho de ida e volta.

---

# 🔄 Sistema de Varredura

O servo motor movimenta o sensor entre diferentes ângulos (0° até 180°), permitindo mapear o ambiente ao redor.

Durante a varredura:

- 🟢 LED Verde → Nenhum obstáculo próximo
- 🟡 LED Amarelo → Objeto em distância média
- 🔴 LED Vermelho + 🔊 Buzzer → Objeto muito próximo

Esse comportamento transforma o projeto em um pequeno sistema inteligente de monitoramento e detecção.

---

# 🛠️ Componentes Utilizados

- Arduino Uno
- Sensor Ultrassônico HC-SR04
- Servo Motor
- Buzzer
- LEDs
- Resistores
- Protoboard
- Jumpers

---

# 🔌 Esquema do Circuito

![Sistema de Varredura Arduino](./imagem.png)

---

# 💻 Tecnologias Utilizadas

- Arduino IDE
- Linguagem C/C++
- Eletrônica Básica
- Sistemas Embarcados

---

# 🎯 Objetivos do Projeto

Este projeto foi desenvolvido para aprofundar conhecimentos em:

- Sensores ultrassônicos
- Automação
- Sistemas embarcados
- Controle de servo motor
- Programação em Arduino
- Monitoramento de distância
- Integração entre hardware e software

---

# 🚀 Possíveis Aplicações

- Sistemas de segurança
- Robótica
- Sensores de estacionamento
- Monitoramento de obstáculos
- Automação residencial
- Protótipos de radar

---

# 📚 Conceitos Estudados

- Emissão e recepção de ondas ultrassônicas
- Cálculo de distância por tempo de resposta
- PWM no controle de servo motor
- Leitura de sensores digitais
- Alertas visuais e sonoros
- Lógica de decisão em sistemas embarcados

---
```
