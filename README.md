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

- Arduino UNO R3 (intended hardware controller)
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

**Wokwi Simulation:** Open the simulation here: https://wokwi.com/projects/480400767342791681

### Simulation Circuit

![Simulation Circuit]([simulation/simulation_circuit.png](https://github.com/Proz3y/Automatic-Rain-Detection-System/blob/main/simulation/Circuit%20diagram.png))

### No Rain Detected

![Dry Condition]([simulation/dry_condition.png](https://github.com/Proz3y/Automatic-Rain-Detection-System/blob/main/simulation/No%20rain.png))

### Rain Detected

![Rain Detected]([simulation/rain_detected.png](https://github.com/Proz3y/Automatic-Rain-Detection-System/blob/main/simulation/Rain%20detected.png))

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

Add photographs of the actual hardware components here.

## Testing and Results

**Simulation:** Successfully demonstrated the sensor-input logic and servo response using a pushbutton as a simulated rain sensor output.

**Physical implementation:** Further testing is pending.

## Future Improvements

- Complete and verify physical hardware implementation.
- Improve the mechanical design.
- Conduct real-world rainfall testing.
- Improve system reliability.

## Author

Electronics and embedded systems project.
