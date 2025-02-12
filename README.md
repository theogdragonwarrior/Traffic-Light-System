SIMPLE TRAFFIC LIGHT SYSTEM

This project simulates a basic traffic light system using an Arduino Uno, LEDs, and a push button for pedestrian crossing.

The traffic light cycles in the sequence: Green → Yellow → Red → Green
If the push button is pressed, the light immediately turns Red to allow pedestrians to cross.
After a few seconds, the normal cycle resumes.

Components Used: Component Quantity

* Arduino Uno: 1
* Red LED: 1
* Yellow LED: 1
* Green LED: 1
* 220Ω Resistors: 3
* Push Button: 1
* 10kΩ Resistor: 1
* Breadboard: 1
* Jumper Wires: As needed

Circuit Connections

* Red LED → Pin 4 (through 220Ω resistor)
* Yellow LED → Pin 3 (through 220Ω resistor)
* Green LED → Pin 2 (through 220Ω resistor)
* Push Button → Pin 7 (with 10kΩ pull-down resistor)

Code Explanation
The Arduino code follows these steps:

Normal Traffic Cycle
* Green light for 3 seconds
* Yellow light for 3 seconds
* Red light for 3 seconds

Pedestrian Button Pressed
If the button is pressed, the system immediately switches to Red.
After 5 seconds, the normal cycle resumes.

Simulation Recording
Watch the project in action here: https://drive.google.com/file/d/11w4xX2H4_HyV8DJCWm8_9CNkne598SA0/view?usp=sharing

* Author: Shachi Singh
* Roll No: 124EE0001
* Date: 11th February 2025
Date: 11th February 2025
