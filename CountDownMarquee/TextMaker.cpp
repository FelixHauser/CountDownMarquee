#include "TextMaker.h"


RtcSetup rtC;  //init Real Time Clock Object

TextMaker::TextMakerSetup (){


  
  }



String TextMaker::composedString(){

  String preString=FIRST_TEXT_TO_SCROLL;

  if (COUNTDOWN==true){
    
    preString=preString+rtC.timeString()+LAST_TEXT_TO_SCROLL;
    
    }else{

      preString=preString+LAST_TEXT_TO_SCROLL;
      
      }

    return preString;
    
  }
