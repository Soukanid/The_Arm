#include <ESP32Servo.h>

Servo myServo;
int pos = 0;

void setup()
{
  myServo.attach(13);
}

void loop() {
  myServo.write(90);
  for (pos = 0; pos <= 180; pos += 1)
  { 
    myServo.write(pos);
    delay(15);
  }

  for (pos = 180; pos >= 0; pos -= 1)
  { 
    myServo.write(pos);
    delay(15);
  }
}
