# Automatic Rain Detection System

## Project Overview

The Automatic Rain Detection System is an embedded systems project designed to detect rainfall and automatically activate a response mechanism using a rain sensor, microcontroller and servo motor.

The system monitors rainfall through a rain sensor module. When rain is detected, the microcontroller processes the sensor signal and activates the servo motor. When rainfall stops, the servo returns to its initial position.

The project combines electronics, microcontroller programming, circuit simulation and hardware implementation.

## Project Objectives

- Design an automatic rain detection system.
- Interface a rain sensor with a microcontroller.
- Control a servo motor using sensor input.
- Simulate the circuit before hardware implementation.
- Explore practical applications of embedded systems.

## Components Used

- Arduino Uno R3 (intended hardware controller)
- Rain sensor module
- Servo motor
- Breadboard
- Jumper wires
- Regulated 5V power supply

## Technologies Used

- Arduino IDE
- C/C++
- Wokwi
- Git and GitHub

## Working Principle

The rain sensor detects water on its sensing surface and sends a digital signal to the microcontroller.

The controller continuously monitors the sensor output.

- LOW: Rain detected; servo rotates to 90 degrees.
- HIGH: No rain detected; servo returns to 0 degrees.

## Circuit Simulation

The system was simulated using Wokwi.

A pushbutton was used to represent the digital output of the rain sensor during simulation.

**Wokwi Simulation:** [Open the simulation here](https://wokwi.com/projects/480400767342791681)

### Simulation Circuit

<img width="921" height="547" alt="Simulation Circuit" src="https://github.com/user-attachments/assets/798b2192-ab5f-4f07-954d-0ff70c3316ea" />

### No Rain Detected

<img width="1177" height="753" alt="No Rain Detected" src="https://github.com/user-attachments/assets/6bdb6ee8-4273-41c7-bed7-70236f14a1c1" />

### Rain Detected

<img width="1252" height="727" alt="Rain Detected" src="https://github.com/user-attachments/assets/aa5417ef-3031-4ffd-ba94-22afc5a12aa0" />

## Hardware Implementation

The intended physical implementation uses a rain sensor module connected to the microcontroller and a servo motor as the output mechanism.

Hardware connections:

| Component | Connection |
|---|---|
| Rain sensor VCC | 5V |
| Rain sensor GND | GND |
| Rain sensor DO | D7 |
| Servo signal | D6 |
| Servo VCC | Regulated 5V |
| Servo GND | Common GND |

Physical hardware verification is pending further inspection of the Intel Galileo Gen 2 board.

## Hardware Components
Arduino Uno R3

<img width="232" height="264" alt="Arduino UNO" src="https://github.com/user-attachments/assets/bc485861-a85d-475d-aaec-84aab558d309" />

Micro servo motor

<img width="554" height="554" alt="Micro servo motor" src="https://github.com/user-attachments/assets/8223507a-dc74-4e31-a9af-c73fa67e5cc1" />

Rain drop sensor module

<img width="445" height="449" alt="Rain Drop Sensor Module" src="https://github.com/user-attachments/assets/f789935b-2277-4c26-a756-4f14289ba5b3" />

Jumper wires

<img width="558" height="549" alt="M-M Jumper wires" src="https://github.com/user-attachments/assets/3fba02dc-01ff-4f4b-a41d-18c6c3385f9f" />
<img width="447" height="447" alt="M-F Jumper wires" src="https://github.com/user-attachments/assets/1bca9c05-8c93-4d17-afd7-acc50ce3f124" />

Breadboard

<img width="351" height="347" alt="Breadboard" src="https://github.com/user-attachments/assets/70bce28c-b264-4093-b0c9-3f6388e14d3d" />

## Testing and Results

**Simulation:** Successfully demonstrated the sensor-input logic and servo response using a pushbutton as a simulated rain sensor output.

**Physical implementation:** Further testing is pending.

## Future Improvements

- Complete and verify physical hardware implementation.
- Improve the mechanical design.
- Conduct real-world rainfall testing.
- Improve system reliability.


