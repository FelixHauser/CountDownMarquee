#ifndef Marquee_h
#define Marquee_h

#include "Configuration.h"
#include "RealTimeClock.h"

class Marquee{
  
  public:


  MarqueeSetup (); // Constructor

  void scrollText();  //Main Public Method


  private:

  void show();  //private method
  
  
  };


#endif
