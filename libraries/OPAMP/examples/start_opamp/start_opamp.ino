#include <OPAMP.h>

void setup () {
  Serial.begin(9600);
  delay(2000); // serial monitor delay
  // activate OPAMP
  if (!OPAMP.begin(OPAMP_SPEED_HIGHSPEED)) {
    Serial.println("Failed to start OPAMP!");
  }
  bool isRunning = OPAMP.isRunning(0);
  if (isRunning) {
    Serial.println("OPAMP running on channel 0!");
  } else {
    Serial.println("OPAMP channel 0 is not running!");
  }
}

void loop() {
  delay(1000); // do nothing
}