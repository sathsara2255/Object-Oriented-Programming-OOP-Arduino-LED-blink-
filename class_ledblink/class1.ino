#define LED_PIN 13;

#include "led.h"

led led1(LED_PIN);

void setup() {

 led1.init();

}

void loop() {

 led1.on();
 delay(1000);
 led1.off();
 delay(1000);

}
