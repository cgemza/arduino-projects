//Chelsea Pulaski Gemza
//23 July 2025
//Arduino Project 03: Love-O-Meter (Temperature Sensor)
//A combination of LEDs will light up based on the temperature picked up by the sensor.

//Declare constants
const int sensorPin = A0;
const float baselineTemp = 20.0;

void setup() {
  //This opens a connection between the Arduino and the computer at 9600 bits per second.
  Serial.begin(9600);

//This loop sets pins as outputs fomr 2 through 4, the loop is for code efficiency
  for(int pinNumber = 2; pinNumber<5; pinNumber++){
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  // This stores a reading from the temperature sensor and displays value
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);

  //Converting the reading to the voltage, a float allows decimals
  float voltage = (sensorVal/1024.0) * 5.0;

  //Display
  Serial.print(" , Volts: ");
  Serial.print(voltage);

  Serial.print(" , degrees C: ");

  //Converts the voltage to temperature in degrees
  float temperature = (voltage - .5) * 100;
  Serial.println(temperature);

  //Lighting the LEDs based on the temperature
  if(temperature < baselineTemp+2){
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
  }
  else if(temperature >= baselineTemp+2 && temperature < baselineTemp+4)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);

  }
  else if(temperature >= baselineTemp+4 && temperature < baselineTemp+6)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  else if (temperature >= baselineTemp+6)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  delay(1);
}
