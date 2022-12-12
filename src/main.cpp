#include <Arduino.h>
#include "boot.h"

key bat(2);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  uint16_t b = bat.tik();

  switch (b)
  {
  case 1:
    Serial.println(F("Clik_1"));
    break;
  case 2:
    Serial.println(F("Clik_2"));
    break;
  case 3:
    Serial.println(F("Clik_3"));
    break;
  case 100:
    Serial.println(F("HOLD"));
    break;
  }
}