# Lora Shield v1.4 - Arduino Mega

###### Author: Jaime Andrés Gómez Gutiérrez | Caldas University

###### Subject: Networks III

## Features

> Encrypted comunication,
> Warning alarm,
> Node server,
> Node client: Grove-Moisture-Sensor and Accelerometer

Features:

Frequency band: 868 MHZ
Low energy consumption
Compatible with Arduino Leonardo, Uno, Mega, DUE
External antenna through the I-Pex connector

Specifications:

Communication link of 168dB maximum.
+20 dBm - 100 mW of constant RF power vs. +14 dBm high efficiency PA.
Programmable speed of up to 300 kbps.
High sensitivity: up to -148 dBm.
Low receive current of 10.3 mA, 200 nA in sleep mode.
Fully integrated synthesizer with a resolution of 61 Hz.
Modulation FSK, GFSK, MSK, GMSK, LoRa ™ and OOK.
Built-in bit synchronizer for clock recovery.
Preamble detection.
Dynamic range of 127 dB RSSI.
Automatic RF sensor and CAD with ultra fast AFC.
Packet engine up to 256 bytes with CRC.
Built-in temperature sensor and low battery indicator.

![alt text](./readme-static/lora-shield.jpg 'Shield Lora IoT')

### Final mounting

![alt text](./readme-static/final-mounting.jpg 'Final mounting')

### Accelerometer

![alt text](./readme-static/accelerometer.jpg 'Connect accelerometer to arduino mega 2560 ')

### Grove moisture sensor

![alt text](./readme-static/moisture.jpg 'Connect grove miosture sensor to arduino')

#### Here are suggested for this sensor values:

| _Min_ | _Typ_ | _Max_ | _Condition_          |
| ----- | :---: | ----: | -------------------- |
| 0     |   0   |     0 | sensor in open air   |
| 0     |  20   |   300 | sensor in dry soil   |
| 300   |  580  |   700 | sensor in humid soil |
| 700   |  940  |   950 | sensor in water      |

## Moisture and accelerometer est

![alt text](./readme-static/test.jpg 'Test')

#### Video test

https://youtu.be/CISP1jIE9hM

## Interesting links

1. [wiki.dragino.com](https://wiki.dragino.com/index.php?title=Lora_Shield)
2. [Grove-Moisture-Sensor](http://wiki.seeedstudio.com/Grove-Moisture_Sensor)
3. [Examples Lora - Arduino](https://github.com/dragino/Lora/tree/master/Lora%20Shield)
4. [Video connect accelerometer](https://www.youtube.com/watch?v=_przDICw1-Q)
5. [Accelerometer Arduino Code](https://hetpro-store.com/TUTORIALES/mma7361-sensor-acelerometro/)
6. [Building a global open LoRaWAN™ network](https://www.thethingsnetwork.org/)
