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