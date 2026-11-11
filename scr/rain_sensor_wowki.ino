#include <Servo.h>

Servo clothesline;

const int rainSensor = 7;
const int servoPin = 6;

int currentPosition = 0;
int previousRainState = HIGH;

void setup() {
  pinMode(rainSensor, INPUT_PULLUP);

  clothesline.attach(servoPin);
  clothesline.write(0);

  Serial.begin(9600);
  Serial.println("SYSTEM READY - NO RAIN");
}

void loop() {
  int rainState = digitalRead(rainSensor);

  if (rainState != previousRainState) {
    if (rainState == LOW) {
      Serial.println("RAIN DETECTED - MOVING CLOTHES UNDER SHELTER");
    } else {
      Serial.println("NO RAIN - RETURNING CLOTHESLINE");
    }

    previousRainState = rainState;
  }

  int targetPosition = (rainState == LOW) ? 90 : 0;

  if (currentPosition < targetPosition) {
    currentPosition++;
  } else if (currentPosition > targetPosition) {
    currentPosition--;
  }

  clothesline.write(currentPosition);

  delay(20);
}
