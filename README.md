# CountDownMarquee
 LED scroll text marquee with RTC countdown.

## Introduction

This is the Arduino sketch for a LED marquee which scrolls a given text in addition to a countdown to a given date, down to the second. Obviously for this to happen the use of a RTC add on for your Arduino is required.

Because of the characteristics of the ports used, the code is specifically for an Arduino UNO. It can be ported to other Arduinos and you can read more about it on the original maker's blog (link down below).

To the original work, I only added the countdown and organised the whole code for better clarity by using libraries and defines.

The LED strip used are import WS2812B.

## References

The core of the code is well above what I can code myself. I believe that credit must be given when credit is due. So if you want to know more about the original author of the marquee, scrolling code, etc. visit please his blog and GitHub profile:

* Blog: https://wp.josh.com/2016/05/20/huge-scrolling-arduino-led-sign/
* GitHub: https://github.com/bigjosh/MacroMarquee/blob/master/Arduino/SimpleScroll/SimpleScroll.ino

There are different RTC modules for Arduino and other microprocessors. The one it is used on this project is a DS3231. The library I used for this project is by Rinky Dink Electronics and can be found here:

http://www.rinkydinkelectronics.com/library.php

## Status

The marquee works fine and so does the countdown. Two lines of text will be displayed with or without countdown in the middle of them both.

## Isues

No clue why is that, but if the Real Time Clock object declaration on Marquee.cpp (line 5) is removed or commented out, the scrolling does not work and instead only part of the text is shown without scrolling.

## To Do

* Color customization
* Custom characters
* Static Text
* Control interface (buttons, encoders, etc.)
