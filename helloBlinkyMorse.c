/*
  Morse Code Rules
  - length of . is one unit
  - length of - is three units
  - space between  parts of letters is one unit
  - space between letters is three units 
  - space between words is seven units
*/

#include <wiringPi.h>
#include <stdio.h>

#define char MORSE[] = ".... . .-.. .-.. --- / .-- --- .-. .-.. -.."; // hello world in morse code

int main(void) {
  wiringPiSetup(); // init wiring pi standard pin definitons
  pinMode(0, OUTPUT); // inits GPIO pin 0 as output
  
  for (;;) {

  }

  return 0; // end prgram (never reaches because endless loop)
}
