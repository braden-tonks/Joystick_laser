#include <Servo.h>;
int sw = 2;
int x;
int servo_num;
int laser = 52;
Servo Servo1;
int servo_pin = 9;
int pos = 0;
int speed;
void setup() {
  // initialize all pins to inputs and outputs
  pinMode(sw, INPUT);
  digitalWrite(sw, HIGH);
  pinMode(laser, OUTPUT);
  Servo1.attach(servo_pin);

}

void loop() {
  // if joystick clicked then laser turns on
  if (digitalRead(sw) == 0){
    digitalWrite(laser, HIGH);
  }
  // x is set to position of joystick
  x = analogRead(A0);
  // map the position of servo to joystick
  servo_num = map(x,0,1023,0,180);
  // move servo to position
  Servo1.write(servo_num);
}
