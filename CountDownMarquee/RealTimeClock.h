#ifndef RealTimeClock_h
#define RealTimeClock_h

#include "Configuration.h"


class RtcSetup{
  
  
  public:

  RtcSetup (); //Contructor

  String timeString(); //public method

  
  private:

  void setupClock();  // private method
  
  };

#endif
