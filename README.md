#Blinking Three LEDs Project

This project controls three separate LEDs (Red, Green, and Blue) using an Arduino. Each LED blinks a specific number of times in a sequence before passing control to the next one.

How It Works

The sketch initializes three digital pins as outputs and uses for loops to repeat the blinking action for each color:
1. Red LED (Pin 13): Blinks 5 times.
2. Green LED (Pin 8): Blinks 10 times.
3. Blue LED (Pin 5): Blinks 15 times.
Each blink consists of 500ms "on" time and 500ms "off" time.

Hardware Needed

* Arduino Board (e.g., Arduino Uno)
* 3x LEDs (Red, Green, Blue)
* 3x 220Ω Resistors
* Breadboard and Jumper Wires

Wiring Diagram

* Red LED: Connect to Pin 13 (via resistor)
* Green LED: Connect to Pin 8 (via resistor)
* Blue LED: Connect to Pin 5 (via resistor)
* Common: Connect all LED cathodes (short legs) to Arduino GND.

Installation

1. Connect your Arduino to your computer.
2. Open the Arduino IDE.
3. Copy the provided code into a new sketch.
4. Select your board and port, then click Upload.

 
