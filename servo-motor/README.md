# arduino-project05-servo-motor

Author: Chelsea Gemza
Date: August 17, 2025

This project demonstrates how to use a potentiometer as an input device to control the position of a servo motor with an Arduino Uno. Turning the potentiometer adjusts the servo angle in real time, making this an introduction to analog input, PWM output, and motor control.

🛠 Components Used

Arduino Uno R3

Breadboard

Potentiometer (3-pin trim pot style)

Servo motor (3-wire, with female connector)

Male header pins (3-pin)

100 µF electrolytic capacitor (25V)

Jumper wires

⚡ Circuit Overview

Potentiometer

Outer pin → 5V

Outer pin → GND

Middle pin → A0

Servo Motor

Red wire → 5V

Black wire → GND

White wire → Digital Pin 9

Capacitor (100 µF)

Long leg (+) → 5V rail (same as servo red wire)

Short leg (–, striped side) → GND rail (same as servo black wire)

🔍 How It Works

The potentiometer outputs a voltage between 0V and 5V depending on the knob position.

The Arduino reads this analog voltage (0–1023 from analogRead).

The map() function converts it to a usable servo angle (0–179°).

The servo moves to the commanded angle in real time.

The 100 µF capacitor smooths out voltage dips caused by the servo drawing sudden current.

📊 Serial Monitor Output

Example output when turning the potentiometer:

potVal: 120 , angle: 21
potVal: 500 , angle: 87
potVal: 900 , angle: 158
Common Ground

Arduino GND connected to the breadboard ground rail.

Note: The breadboard power rails are often split in the middle. Be sure to bridge them or connect your servo and Arduino to the same half of the rails.
