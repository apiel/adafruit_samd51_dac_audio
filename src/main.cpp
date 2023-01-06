#include <Arduino.h>

#include "dac.h"

uint16_t saw = 0;
void audioCallback(const uint32_t* end, uint32_t* dest)
{
    do {
        saw += 100;
        *dest++ = saw;
        *dest++ = saw;
    } while (dest < end);
}

void setup()
{
    Serial.begin(115200);
    Serial.println("Hello World!");

    initDac(audioCallback);
}

void loop()
{
}