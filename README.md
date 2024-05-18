# Stresses Analysis 3rd Project (using LCD to Display Angles from Flex Sensor)

## Components
- 1x Flex Sensor
- 1x LCD 16x2
- 1x Arduino
- 1x 10K Potentiometer
- 1x 220 Potentiometer
- 1x 10K Resistor
- 1x Switch
- Jumper Wires

## Circuit Diagram
![Circuit Diagram](https://github.com/mohamedsameh108/Stresses-Analysis-3rd-Project/blob/main/circuitDiagram.png)

## Code
[Project Code](https://github.com/mohamedsameh108/Stresses-Analysis-3rd-Project/blob/main/code.ino)

## Project in Tinkercad
[Project on Tinkercad](https://www.tinkercad.com/things/43DrhdupNwr-stress-analysis-3rd-project?sharecode=UgmJg2Ywfammr3FMjNHvEj4sSxLHdRAZE2KaojnNe8E)

## Instructions

1. **Wiring the Components:**
    - Connect the flex sensor to the analog input A0 on the Arduino (other pin to 5V).
    - Connect the 10K resistor to flex sensor and other pin to ground.
    - Connect the LCD to the Arduino as follows:
        - RS to Arduino pin 12
        - EN to Arduino pin 11
        - D4 to Arduino pin 4
        - D5 to Arduino pin 5
        - D6 to Arduino pin 6
        - D7 to Arduino pin 7
        - VSS to GND
        - VDD to 5V
        - V0 to the middle pin of a 220 potentiometer (other two pins to 5V and GND)
        - RW to GND
        - A to the middle pin of a 10K potentiometer (other two pins to 5V and GND)
        - K to GND
    - Connect the switch to digital input 8 on the Arduino.
    - Connect the second potentiometer to adjust the contrast of the LCD.

2. **Upload the Code:**
    - Open the Arduino IDE.
    - Copy the code from the [Project Code](https://github.com/mohamedsameh108/Stresses-Analysis-3rd-Project/blob/main/code.ino) link.
    - Paste the code into the Arduino IDE.
    - Upload the code to your Arduino board.

3. **Operating the Project:**
    - Use the flex sensor to change the angle reading.
    - The angle will be displayed on the LCD.
    - Use the switch to toggle between degrees and radians.
    - Adjust the potentiometers to set the LCD contrast and background contrast for better visibility.

## Final Diagram
Your circuit will look like this when you click start simulation button
![Circuit Diagram](https://github.com/mohamedsameh108/Stresses-Analysis-3rd-Project/blob/main/runningCircuit.png)
