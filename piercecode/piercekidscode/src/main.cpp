#include <Arduino.h>
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;


void setup() {
  servo1.attach(12);
  servo2.attach(10);
  servo3.attach(9);

  servo1.write(120);
  servo2.write(10);
  servo3.write(10);

  servo1.write(10);
  delay(1000);
  servo1.write(120);
  delay(1000);
  servo2.write(120);
  delay(1000);
  servo2.write(10);
  delay(1000);
  servo3.write(150);
  delay(1000);
  servo3.write(10);
}

void loop() {
  // put your main code here, to run repeatedly:
}

