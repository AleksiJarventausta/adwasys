#include "Arduino.h"
#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

int led = 4; // the pin the LED is connected to
void setup() {
  pinMode(led, OUTPUT); // Declare the LED as an output
    }

void loop() {
  digitalWrite(led, HIGH); // Turn the LED on
  delay(1000);
  digitalWrite(led, LOW); // Turn the LED on
  delay(5000);
}
