// C++ code
//

#include <Arduino.h>
const int led = 13;
const int pot = 7;

void setup()
{ 
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pot,INPUT);
}

void loop()
{
  int potvalue = analogRead(pot);
  Serial.println(potvalue);
  digitalWrite(led,HIGH);
  delay(potvalue);
  digitalWrite(led,LOW);
  delay(potvalue);
}
/** 
 * !https://www.tinkercad.com/things/5qP4A9zwrrN-potentiometer
*/