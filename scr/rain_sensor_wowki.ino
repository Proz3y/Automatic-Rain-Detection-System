#include <Servo.h>

const int rainSensor = 7;
const int servoPin = 6;

Servo rainServo;

void setup() {
  pinMode(rainSensor, INPUT_PULLUP);

  rainServo.attach(servoPin);
  rainServo.write(0);

  Serial.begin(9600);
}

void loop() {
  int rainState = digitalRead(rainSensor);

  if (rainState == LOW) {
    Serial.println("RAIN DETECTED");
    rainServo.write(90);
  } 
  else {
    Serial.println("NO RAIN");
    rainServo.write(0);
  }

  delay(200);
}
