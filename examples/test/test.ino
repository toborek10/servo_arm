#include "Arm.h"
Arm arm;

void setup() {
  Serial.begin(9600);
  Serial.println("Servo Arm Test #001");
}

void loop() {
  if(Serial.available() > 0){
    arm.moveTo( Serial.readStringUntil('\n') );
  }
  arm.update();
  
  delay(20); //loop should work in 50Hz frequency
}
