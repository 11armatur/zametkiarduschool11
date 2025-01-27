#include <Arduino.h>
byte val;
void setup() {
    Serial.begin(9600);
}

void loop(){
    if(Serial.available()>0){
        val = Serial.read();
        Serial.println(val);
        if(val == 51 || val == 52) {
          Serial.println("da detka");
        }else if(val==49 || val==50){
          Serial.println("ok");
        }else if(val>=6 && val<=12){
          Serial.println("sil/n'o");
        }else if(val==21){
          Serial.println("o4ko!!!");
        }else{
          Serial.println("proleeeeeet");
        }
    }
}
