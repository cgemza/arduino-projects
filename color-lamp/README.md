# arduino-project04-color-lamp

Arduino Project 04: Color Mixing Lamp
Chelsea Gemza
Date: August 3, 2025

Overview
This Arduino project uses three analog light sensors (photoresistors) to read ambient light levels and map them to control the brightness of three RGB LEDs. The result is a dynamic color-mixing lamp that responds to the surrounding environment.

Features
Reads input from red, green, and blue photoresistors

Maps sensor readings to RGB LED brightness levels

Outputs both raw and mapped sensor values to the Serial Monitor

Creates a real-time, responsive RGB lamp based on ambient light conditions

Components Used
Arduino Uno (or compatible board)

3x Photoresistors (for red, green, blue channels)

3x 10kΩ resistors (used as pull-down resistors)

3x RGB LEDs or individual red, green, and blue LEDs

Jumper wires and breadboard

Wiring Guide
LED Color	LED Pin	Sensor Pin
Red	10	A0
Green	9	A1
Blue	11	A2

Each sensor input is connected through a voltage divider using a 10kΩ resistor to ground.

Code Summary
The code reads analog values from each color channel’s sensor. These raw values (0–1023) are divided by 4 to scale them to 8-bit PWM values (0–255) and then written to the corresponding LED pin using analogWrite().

How to Use
Upload the sketch to your Arduino board.

Open the Serial Monitor (9600 baud) to view sensor readings.

Shine light or cover each photoresistor to observe the changes in LED brightness.

Future Improvements
Add potentiometers to adjust sensitivity

Store color profiles in EEPROM

Incorporate buttons for manual override
