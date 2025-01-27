#include <Arduino.h>

float pi = 3.141592653589793238;
void setup() {
  Serial.begin(19200);
  

}

void loop() {
  if (Serial.available() > 0) {
    long data = Serial.parse();
    Serial.println(data);
    

  }

}


