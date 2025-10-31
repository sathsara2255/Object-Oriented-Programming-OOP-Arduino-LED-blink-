# Object-Oriented-Programming-OOP-Arduino-LED-blink-
Simple and the esiast project led blink as class and object using cpp programming language and Arduino IDE  

Main 

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

led.h file

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

led.cpp file

#include "led.h"


 led::led(byte pin){
  this-> pin = pin;
  }

 void led::init(){
  pinMode(pin,OUTPUT);
 }
 void led::init(byte defaultstatus){
  init();
      if (defaultstatus == HIGH){
       on();
      }
       else {
       off();    
      }
 }

 void led::on(){
   digitalWrite(pin, HIGH);
 }
 void led::off(){
   digitalWrite(pin, LOW);
 }

