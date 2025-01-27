#include <Arduino.h>



void setup() {
  Serial.begin(19200);
  }

void loop() {
if (Serial.available() > 0) {
    int datain = Serial.parseInt();
    int boom = datain * 2;//=======================umnojaem na 2 chislo poluchennye ot polzovatelya
    Serial.print(datain);
    Serial.print(boom);
  }

}