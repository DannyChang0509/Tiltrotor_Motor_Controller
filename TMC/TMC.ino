#include <Servo.h>

#define MIN 0
#define MAX 1023

Servo ESC1;
Servo ESC2;
Servo ESC3;

int potValue;

void setup() { 
  ESC1.attach(9,1000,2000);
  ESC2.attach(10,1000,2000);
  ESC3.attach(11,1000,2000);
} 
  
void loop() { 
  potValue = analogRead(A0);
  potValue = map(potValue, MIN, MAX, 0, 180);
  
  ESC1.write(potValue);
  ESC2.write(potValue);
  ESC3.write(potValue);
}
