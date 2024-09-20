#include <Arduino.h>
const int buttonPin = 2;    // Pin connected to the pushbutton
const int ledPin1 = 13;     // Pin connected to the LED

unsigned long prev = 0;
unsigned long current = 0;

int state =0;

bool ledon =false;

void setup() {
  pinMode(ledPin1, OUTPUT);    // Set LED pin as output
  pinMode(buttonPin, INPUT);   // Set button pin as input
}

void loop() {
 state  = digitalRead(buttonPin);
  if (state ==HIGH){
  current = millis ();
    if(current-prev>=500){
    prev = current ;
      digitalWrite (ledPin1, !digitalRead(ledPin1));
    }
  }
}
/**
 * ! This Code tunes the LED on and off when the button is pressed.
 * Todo: Tinkercad Link : https://www.tinkercad.com/things/7nuKOWPswEU-blinking-light
*/