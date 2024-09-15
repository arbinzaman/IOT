const int buttonPin = 2;    // Pin connected to the pushbutton
const int ledPin1 = 13;     // Pin connected to the LED
const int ledPin2 =12;

int buttonState = 0;        // Variable to store the button state

void setup() {
  pinMode(ledPin1, OUTPUT);    // Set LED pin as output
  pinMode (ledPin2 ,OUTPUT);
  pinMode(buttonPin, INPUT);   // Set button pin as input
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Read the state of the button

  if (buttonState == HIGH) {             // If the button is pressed
    digitalWrite(ledPin1, HIGH);         // Turn the LED on
    digitalWrite(ledPin2, LOW);
    
  } else {                               // If the button is not pressed
    digitalWrite(ledPin1, LOW);          // Turn the LED off
    digitalWrite(ledPin2,  HIGH);
  }
}   
/**
 * ! This code is for a push button that toggles the state of an LED
 * Todo: Tinkercad Link : https://www.tinkercad.com/things/gnYCTjIA4o2-push-button-ex-01
*/