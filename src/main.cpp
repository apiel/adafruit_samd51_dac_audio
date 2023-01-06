#include <Arduino.h>

// #include "./output_i2s.h"
// AudioOutputI2S           audioOut;

#include "./output_dacs.h"
AudioOutputAnalogStereo audioOut;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:
  //audioOut.update();
  // Serial.println("yo");
  // delay(1000);
}