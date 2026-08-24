# arduino-project03-temperature-sensor
### Author: Chelsea Pulaski Gemza  
### Date: July 23, 2025

## 📌 Description
This project demonstrates how to read temperature using a TMP36 sensor and visualize it using a set of three LEDs. Depending on the ambient temperature, different combinations of LEDs light up — mimicking a “Love-O-Meter.”

## 🔧 Hardware Used
- Arduino Uno (or compatible board)
- TMP36 Temperature Sensor
- 3 LEDs (Red, Yellow, Green)
- 3 Resistors (220Ω or 330Ω)
- Jumper wires
- Breadboard

## ⚙️ How It Works
- The TMP36 sensor reads the temperature and sends an analog signal to the Arduino.
- This signal is converted to voltage, then to degrees Celsius.
- The code compares the temperature to a baseline (20°C) and lights up LEDs based on thresholds:
  - `< 22°C`: No LEDs
  - `22°C to <24°C`: 1 LED
  - `24°C to <26°C`: 2 LEDs
  - `>= 26°C`: All 3 LEDs

## 🔌 Pin Connections

| Component           | Arduino Pin |
|--------------------|-------------|
| TMP36 OUT          | A0          |
| LED 1 (Green)      | 2           |
| LED 2 (Yellow)     | 3           |
| LED 3 (Red)        | 4           |
| TMP36 VCC          | 5V          |
| TMP36 GND          | GND         |
| LED GND (via resistors) | GND     |

## 🧠 Code Summary
- Initializes serial communication for temperature monitoring.
- Reads sensor value, converts it to voltage and then to temperature.
- Turns on a number of LEDs depending on how far the temperature is above the baseline.

## ▶️ Getting Started
1. Connect the components as listed above.
2. Upload the sketch to your Arduino.
3. Open the Serial Monitor (9600 baud) to see live temperature readings.
4. Observe the LEDs light up based on how “hot” it gets!

## 📝 Notes
- You can adjust `baselineTemp` to change when LEDs begin lighting up.
- This project is a great intro to analog inputs and conditional logic with LEDs.
