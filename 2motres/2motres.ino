#include <Arduino.h>

int motorA = 12;
int motorB = 13;

void setup() {
  
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
    
}

void loop() {
 
  analogWrite(motorA,255);
  analogWrite(motorB,0);
  delay(500);
  analogWrite(motorA,0);
  analogWrite(motorB,255);

}
