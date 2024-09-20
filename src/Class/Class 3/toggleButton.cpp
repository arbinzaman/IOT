#include <Arduino.h>
const int buttonPin = 2;    // Pin connected to the pushbutton
const int ledPin1 = 13;     // Pin connected to the LED

int state = 0;
int laststate = 0 ;
int stateno = 0 ;

unsigned long prev = 0;
unsigned long current = 0;



void setup() {
  pinMode(ledPin1, OUTPUT);    // Set LED pin as output
  pinMode(buttonPin, INPUT);   // Set button pin as input
}

void loop() {
 state  = digitalRead(buttonPin);
  if (state ==HIGH && laststate == LOW){
 	stateno =(stateno+1)%3;
    delay(50);
  }
  laststate = state ;
  if (stateno == 0){
  digitalWrite(ledPin1 , LOW);
  }
  else if(stateno == 1){
  digitalWrite(ledPin1 , HIGH);
  }
  else if (stateno == 2){
  current = millis();
    if (current - prev >= 500){
    prev = current ;
      digitalWrite (ledPin1 , !digitalRead(ledPin1));
    }
  }
}


/**
 * ! .
 * Todo: Tinkercad Link : https://www.tinkercad.com/things/ajuikqe2o2P-toggle-button
*/