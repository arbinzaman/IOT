#include <Arduino.h>


const int led=13;
const int ledpin=4;
int photopin=2;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(ledpin, OUTPUT);
  pinMode(photopin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int lightRaw=analogRead(photopin);
  Serial.println(lightRaw);
 
  int light =map(lightRaw,1023,0,10,0);
  Serial.println(light);
 
  digitalWrite(led, HIGH);
 
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  if(light >5){
    digitalWrite(ledpin, HIGH);
  }
   
}

/**
 * !https://www.tinkercad.com/things/fzujp6Ttr2a-light-resisttor-with-led-map
*/