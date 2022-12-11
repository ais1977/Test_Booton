#include <Arduino.h>
#include "boot.h"

key bat (2);

void setup() {
  Serial.begin(115200);
}

void loop() {
  uint16_t b = bat.tik();

 if (b>0) Serial.println(b);
 
}