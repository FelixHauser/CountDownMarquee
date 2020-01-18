#include "Marquee.h"

Marquee marquee; //Init Display
 
 
void setup(){
  
  marquee.MarqueeSetup();

  Serial.begin(9600);
  
  }
 
void loop(){
  
  marquee.scrollText();
  
  }
