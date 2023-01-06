#include <Arduino.h>

#include "dac.h"

void setup()
{
    Serial.begin(115200);
    Serial.println("Hello World!");

    initDac();
}

void loop()
{
}