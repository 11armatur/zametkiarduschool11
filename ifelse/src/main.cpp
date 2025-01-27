#include <Arduino.h>

byte val;
void setup() {
    Serial.begin(9600);
}

void loop(){
    if(Serial.available()>0){
        val = Serial.parseInt();
        if(val == 1 || val == 5) {
            Serial.println("da detka");
        }else{
            Serial.println("noooouuu");
        } 
    }
}
    


  
  