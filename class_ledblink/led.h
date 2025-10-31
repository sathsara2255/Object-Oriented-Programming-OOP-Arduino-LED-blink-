#ifndef LED_H
#define LED_H

#include<Arduino.h>

class led  {

private: 
 byte pin;
 
 public:
 led(){}
 
  led(byte pin);

 void init();
 void init(byte defaultstatus);

 void on();
 void off();
 
};


#endif