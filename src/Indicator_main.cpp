#include <Arduino.h>

const int pin0 = 3;	//Green
const int pin1 = 4;	//Yellow
const int pin2 = 21;	//Red

void setup() {
  pinMode(pin0, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void loop() {
  // Binary sequence to verify lights function
  for (int count = 0; count < 8; count++) {
    digitalWrite(pin0, (count >> 0) & 1);
    digitalWrite(pin1, (count >> 1) & 1);
    digitalWrite(pin2, (count >> 2) & 1);

    delay(1000);
  }
}
