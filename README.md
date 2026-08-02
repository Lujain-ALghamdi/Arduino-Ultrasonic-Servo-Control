# Arduino Ultrasonic Servo Control System 🤖

This project implements an obstacle detection system using an Arduino UNO, an HC-SR04 ultrasonic sensor, a servo motor, and an LED indicator.
The ultrasonic sensor measures the distance of objects. When an obstacle is detected within 10 cm, the servo motor rotates to a specific angle and the LED turns on. When the obstacle is removed, the servo returns to its original position and the LED turns off.

👉🏻 [Explore Live Tinkercad Circuit Model](https://www.tinkercad.com/things/3CgCQiaMN5x-ultrasonicservocontrol)


## Components Used

- Arduino UNO
- HC-SR04 Ultrasonic Distance Sensor
- Servo Motor (SG90)
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires


## Circuit Connections

### HC-SR04 Ultrasonic Sensor

| HC-SR04 Pin | Arduino Pin |
|-------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

### Servo Motor

| Servo Wire | Arduino Pin |
|------------|-------------|
| Red (VCC) | 5V |
| Brown/Black (GND) | GND |
| Orange (Signal) | D6 |

### LED

| LED Connection | Arduino Pin |
|----------------|-------------|
| Anode (+) through 220Ω resistor | D3 |
| Cathode (-) | GND |


## How It Works

1. The HC-SR04 sensor continuously measures the distance.
2. If the detected distance is 10 cm or less:
   - The servo motor rotates to 90°.
   - The LED turns on.
3. If no obstacle is detected:
   - The servo returns to 0°.
   - The LED turns off.

---

## Circuit Diagram & Simulation Views


https://github.com/user-attachments/assets/70628930-3dfa-40c1-9e65-860581ec6508


## Hardware Implementation

<img width="1280" height="709" alt="6012542958856507143_121" src="https://github.com/user-attachments/assets/fa09ede7-a47c-4d2a-af84-0c8968c1f5a8" />

### Hardware Circuit Video

https://github.com/user-attachments/assets/dc9f1bd8-931d-48ac-a8dc-b7e131b9e1f5

