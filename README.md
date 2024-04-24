# Repositorio proyecto ESP32

# Descripción

## Pinout

Las conexiones empleadas en el ESP32 se ven reflejadas por su pinout:

<img src="./img/ESP32-DEVKITV1-pinout.png" alt="PINOUT ESP-WROON-32" width="400"/>

La siguiente tabla de conexiones muestra las comunicaciones con los sensores y el ESP32

| Sensor | Sensor PIN | ESP32                | Protocolo     |
| ------ | ---------- | -------------------- | ------------- |
| DHT11  | DAT        | D5 (GPIO 5)          | Propio        |
| MQ7    | A0         | D4 (GPIO 4 - ADC2_0) | Analógico (V) |
| MQ135  | A0         | D2 (GPIO 2 - ADC2_2) | Analógico (V) |

# Sensores

## DHT11

- Incluir texto hablando del protocolo de comunicaciones propio del dht11
- Incluir imagen del gráfico
- Incluir imagen del sensor

## MQ7

- Comunicaciones analógicas
- Lee CO
- Calibración
- Imagen

## MQ135

- Comunicaciones analógicas
- Lee CO
- Calibración
- Imagen

# Microcontrolador

## ESP32
El módulo ESP32 es una solución de Wi-Fi/Bluetooth todo en uno, integrada y certificada que proporciona no solo la radio inalámbrica, sino también un procesador integrado con interfaces para conectarse con varios periféricos. El procesador en realidad tiene dos núcleos de procesamiento cuyas frecuencias operativas pueden controlarse independientemente entre 80 megahercios (MHz) y 240 MHz. Los periféricos del procesador facilitan la conexión a una variedad de interfaces externas como:

Interfaz periférica serial (SPI)
I2C
Transmisor receptor asíncrono universal (UART)
I2S
Ethernet
Tarjetas SD
Interfaces táctiles y capacitivas

# MQTT
