//Chelsea Gemza
//17 August 2025
//Arduino Project 5: Mood Cue Using a Servo Motor

//Import the servo motor library and refer to it by creating an object
#include <Servo.h>
Servo myServo;

//Declare the constant and variables
int const potPin = A0;
int potVal;
int angle;

void setup() {
  
  //Declares what pin the motor is attached to
  myServo.attach(9);

  //A serial connection to check values from the potentiometer
  Serial.begin(9600);

}

void loop() {
  
  //read the analog inpurt and print out the value
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);


  //The map function scales numbers so it can create a usable calue for the servo motor
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(" , angle: ");
  Serial.print(angle);

  //Move the motor to the specified angle and delay so it has time to move to new position
  myServo.write(angle);
  delay(15);

}
