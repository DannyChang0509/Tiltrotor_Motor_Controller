#define MIN 0
#define MAX 1023

int potValue;

void setup() { 
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
} 
  
void loop() { 
  potValue = pulseIn(3, HIGH, 20000);
  potValue = map(potValue, MIN, MAX, 0, 255);
  
  analogWrite(9,potValue);
  analogWrite(10,potValue);
  analogWrite(11,potValue);
}
