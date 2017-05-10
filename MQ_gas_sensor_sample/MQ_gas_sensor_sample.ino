/*
  e-Gizmo MQ-x Gas sensor kit

  Reads an digital on pins and
  prints the result to the serial monitor.

  This example code is in the public domain.

  Connections:
   Gizduino      MQ-x Gas sensor kit
     +5V   ----->      VIN
     GND   ----->      GND
     D5    ----->      LOW
     D6    ----->      MID
     D7    ----->      HIGH

  by:
  e-Gizmo Mechatronix Central
  http://www.e-gizmo.com
  September 6, 2014

*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on digital pins:
  int LOW_indicator = digitalRead(5);
  int MID_indicator = digitalRead(6);
  int HIGH_indicator = digitalRead(7);

  // print out the value you read:
  Serial.print("LOW = ");
  Serial.print(LOW_indicator);
  Serial.print(" MID = ");
  Serial.print(MID_indicator);
  Serial.print(" HIGH = ");
  Serial.println(HIGH_indicator);

}
