// Include all needed Libraries

#include <Arduino.h>
#include <DS3231.h>

//Set the Text to display

#define FIRST_TEXT_TO_SCROLL "                    First text to scroll "  //leave empty ("") for no text. Leave some blank spaces to the left to make the text scroll from the top right.
#define LAST_TEXT_TO_SCROLL " Second text to scroll"                      //leave empty ("") for no text

#define COUNTDOWN true // Set to true true to show the countdown. Set to false to not show it


//Define the Marquee

#define PIXELS 100  // size of the marquee (# of LEDs)
#define SCROLL_DELAY 40  // scroll speed




// Set the target date for the countdown

#define TARGET_YEAR 2020
#define TARGET_MONTH 4
#define TARGET_DAY 3
#define TARGET_HOUR 14
#define TARGET_MINUTES 00
#define TARGET_SECONDS 00
