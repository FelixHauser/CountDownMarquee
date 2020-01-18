#include "RealTimeClock.h"

#define SECONDS_WEEK 604800
#define SECONDS_DAY 86400
#define SECONDS_HOUR 3600
#define SECONDS_MINUTE 60

// Init the DS3231 using the hardware interface
DS3231  rtc(SDA, SCL);

Time t;


RtcSetup::RtcSetup (){
  
  setupClock();
  
  }



// this method returns the time char
String RtcSetup::timeString(){
  
  t.hour = TARGET_HOUR;
  t.min = TARGET_MINUTES;
  t.sec = TARGET_SECONDS;
  t.year = TARGET_YEAR;
  t.mon = TARGET_MONTH;
  t.date = TARGET_DAY;

  unsigned long remSec= rtc.getUnixTime(t)-rtc.getUnixTime(rtc.getTime());

  int weeks;
  int days;
  int hours;
  int minutes;
  
  if (remSec >= SECONDS_WEEK){

  weeks=remSec/SECONDS_WEEK;
  remSec=remSec-(unsigned long)weeks*SECONDS_WEEK;
  
  }else{

    weeks=0;
    
    }

   if (remSec>=SECONDS_DAY){

    days=remSec/SECONDS_DAY;
    remSec=remSec-(unsigned long)days*SECONDS_DAY;

    }else{
      
      days=0;
      
      }

    if (remSec>=SECONDS_HOUR){
    hours=remSec/SECONDS_HOUR;
    remSec=remSec-(unsigned long)hours*SECONDS_HOUR;


    }else{
      
      hours=0;
      
      }

    if (remSec>=SECONDS_MINUTE){
      
    minutes=remSec/SECONDS_MINUTE;
    remSec=remSec-(unsigned long)minutes*SECONDS_MINUTE;
    
    }else{
      
      minutes=0;
      
      }


String dateString="           Zeit bis zu den Osterferien: ";
dateString=dateString + weeks + " Woche(n) " + days + " Tag(e) " + hours + " Stunde(n) " + minutes + " Minute(n)";

return dateString;

  }



// init code
void RtcSetup::setupClock(){

// Initialize the rtc object
  rtc.begin();
  
  }

  
