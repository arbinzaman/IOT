const int buttonPin = 2;    // Pin connected to the pushbutton
const int ledPin1 = 13;     // Pin connected to the LED

int lastState =0;
int state =0;

bool ledon =false;

void setup() {
  pinMode(ledPin1, OUTPUT);    // Set LED pin as output
  pinMode(buttonPin, INPUT);   // Set button pin as input
}

void loop() {
  state = digitalRead(buttonPin);  // Read the state of the button
  

  if (state == HIGH && lastState ==LOW) { 
    
    ledon =!ledon;
    delay(50);
  }
  lastState = state;
  
  if(ledon){
  digitalWrite(ledPin1, HIGH);
    
  }
  else{
  digitalWrite(ledPin1,LOW);
  }
}

/**
 * ! This code is for a push button that toggles the state of an LED
 * Todo: Tinkercad Link :https://www.tinkercad.com/things/78Xi8OyXtqi-push-button-ex-2
 * 
*/