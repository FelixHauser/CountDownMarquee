// Include all needed Libraries

#include <Arduino.h>
#include <DS3231.h>

//Set the Text to display

#define FIRST_TEXT_TO_SCROLL "      3D Printers, CNC and Make"
#define LAST_TEXT_TO_SCROLL "       "



//Define the Marquee

#define PIXELS 100
#define SCROLL_DELAY 40




// Set the target date for the countdown

#define TARGET_YEAR 2020
#define TARGET_MONTH 4
#define TARGET_DAY 3
#define TARGET_HOUR 14
#define TARGET_MINUTES 00
#define TARGET_SECONDS 00
