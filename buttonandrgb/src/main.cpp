#include <Arduino.h>

//my ports=======================
//input =9
//output b=3 g=6 r=7
//===============================
int b = 3, g = 6, r = 7;
int button = 9;
int interval = 5;
bool hilob = 1;
bool hilog = 1;
bool hilor = 1;
unsigned long previousMillis = 0;
unsigned long currentMillis = millis();
int led = b;
void setup() {
  Serial.begin(9600);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(button, INPUT);
  
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis > interval) {
    previousMillis = currentMillis;
    if (digitalRead(button) == LOW) {
      if (led == b) {
        if (hilob) {
          digitalWrite(b, HIGH);
          hilob = 0;
          Serial.println("b");
        } else {
          digitalWrite(b, LOW);
          hilob = 1;
        }
      } else if (led == g) {
        if (hilog) {
          digitalWrite(g, HIGH);
          hilog = 0;
          Serial.println("g");
        } else {
          digitalWrite(g, LOW);
          hilog = 1;
        }
      } else if (led == r) {
        if (hilor) {
          digitalWrite(r, HIGH);
          hilor = 0;
          Serial.println("r");
        } else {
          digitalWrite(r, LOW);
          hilor = 1;
        }
      }
    } else {
      if (led == b) {
        digitalWrite(b, LOW);
        led = g;
      } else if (led == g) {
        digitalWrite(g, LOW);
        led = r;
      } else if (led == r) {
        digitalWrite(r, LOW);
        led = b;
      }
    }
  }
}