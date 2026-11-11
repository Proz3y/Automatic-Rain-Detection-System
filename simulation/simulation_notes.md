# Circuit Simulation Notes

## 1. Simulation Platform

The circuit was simulated using **Wokwi**, an online electronics simulator that allows the design and testing of microcontroller-based circuits.

The simulation was carried out before physical hardware implementation to verify the control logic and servo motor response.

## 2. Components Used

| Component | Purpose |
|---|---|
| Arduino Uno | Processes input signals and controls the servo |
| Pushbutton | Simulates the digital output of the rain sensor |
| Servo motor | Represents the mechanical output mechanism |

## 3. Circuit Connections

| Component | Arduino Pin |
|---|---|
| Pushbutton | D7 and GND |
| Servo signal | D6 |
| Servo VCC | 5V |
| Servo GND | GND |

The pushbutton uses the Arduino's internal pull-up resistor through `INPUT_PULLUP`.

## 4. Simulation Logic

The pushbutton represents the digital output of the physical rain sensor.

The system operates as follows:

**Condition 1: No Rain**
- The pushbutton is released.
- The digital input reads HIGH.
- The servo remains at 0 degrees.

**Condition 2: Rain Detected**
- The pushbutton is pressed.
- The digital input reads LOW.
- The servo rotates to 90 degrees.

**Condition 3: Rain Stops**
- The pushbutton is released again.
- The digital input returns to HIGH.
- The servo returns to 0 degrees.

## 5. Program Logic

The Arduino program continuously reads the digital input on pin D7.

An IF-ELSE conditional statement determines the servo position based on the input state.

The Servo library is used to control the servo motor.

## 6. Simulation Results

The simulation demonstrated the expected response under both input conditions.

| Test condition | Input | Expected servo position | Result |
|---|---|---|---|
| No rain | HIGH | 0° | Passed |
| Rain detected | LOW | 90° | Passed |
| Rain stops | HIGH | 0° | Passed |

## 7. Simulation Limitations

- The pushbutton substitutes for the physical rain sensor's digital output.
- Actual rainfall and water sensitivity were not tested in the simulator.
- The simulation demonstrates the control logic rather than the physical sensor's electrical behaviour.
- The servo movement represents the intended mechanical response.

## 8. Conclusion

The Wokwi simulation demonstrated that the programmed control logic responds correctly to changes in the digital input.

The simulation provides a foundation for the physical implementation using a rain sensor module and a microcontroller.

## 9. Simulation Link

View the Automatic Rain Detection System on Wokwi: https://wokwi.com/projects/480400767342791681
