//Chelsea Pulaski Gemza
//18 July 2025
//Arduino Project 02: Spaceship Interface
//A green LED is on indicating "system ready". When the button is pressed down, the green light turns off and
//the two red LEDs blink indicating "engage hyperdrive".

//Declare and initialize the variable
int switchState = 0; 

//Configure the switch as an input and the LEDS as outputs
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

//Checks the state of pin 2 and stores that in the variable
void loop() {
   switchState = digitalRead(2);



//if the button is not pressed
if (switchState == LOW) 
  {
  digitalWrite (3, HIGH); //green LED
  digitalWrite(4, LOW); //red LED
  digitalWrite(5, LOW); //red LED
  }

//if the button is pressed
else 
  {
  digitalWrite(3, LOW);
  digitalWrite (4, LOW);
  digitalWrite(5, HIGH);

  delay(250); //wait for a quarter second

  //toggle the LEDS
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(250); //wait for a quarter second
  }
}



