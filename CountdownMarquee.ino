#include "Marquee.h"

Marquee marquee; //Init Display
 
 
void setup(){
  
  marquee.MarqueeSetup();

  
  
  }
 
void loop(){
  
  marquee.scrollText();
  
  }
