// C++ code
//
#include <Arduino.h>
int photoPin = 2;
int led = 13;
void setup(){
  pinMode(photoPin,INPUT);
  pinMode(led ,OUTPUT);
  Serial.begin(9600);
}
void loop (){
  int light = analogRead(photoPin);
  Serial.println(light);
  digitalWrite(led,HIGH);
  Serial.println(light);
  delay(100);
  digitalWrite(led,LOW);
  Serial.println(light);
  delay(500);
}

/**
 * !https://www.tinkercad.com/things/f5GOyGEnTGq-light-registor-initial
*/