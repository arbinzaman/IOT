#include <Arduino.h>

void setup() {
   pinMode(8, OUTPUT);    
   pinMode(7, OUTPUT);    
   pinMode(6, OUTPUT);    
}

void loop() {
   digitalWrite (8, HIGH);
   digitalWrite (7, HIGH);
   digitalWrite (6, HIGH);
  	delay(1000);
   digitalWrite (7, LOW);
   digitalWrite (8, LOW);
   digitalWrite (6, LOW);
  
   digitalWrite (6, HIGH);
   digitalWrite (7, HIGH);
   digitalWrite (8, HIGH);
  	delay (1000);
  }



/**
 * ! .
 * Todo: Tinkercad Link : https://www.tinkercad.com/things/fxkmUhPvhzk-rgb
*/