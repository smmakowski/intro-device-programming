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
#include <string.h>

int main(void) {
  wiringPiSetup(); // init wiring pi standard pin definitons
  pinMode(0, OUTPUT); // inits GPIO pin 0 as output

  char morse[] = ".... . .-.. .-.. ---/.-- --- .-. .-.. -..";
  int i = 0;
  // iterate through morse string
  while (i < strlen(morse)) {
    char blip = morse[i];
    // check character and LED on
    if (blip == '.') { // turns on light for one unit if .
      digitalWrite(0, HIGH);
      delay(100);
      digitalWrite(0, LOW);
    } else if (blip == '-') { // 3 units  on if -
      digitalWrite(0, HIGH);
      delay(300);
      digitalWrite(0, LOW);
    } else if (blip == ' ') { // 2 units for space between letters ( 1 less to accomodate auto delay between blips)
      delay(200);
    } else if (blip == '/') { // 6 units for word space (1 less than actual to accomadate atuo delay b/t blips)
      delay(600);
    }

    delay(100); // space between parts of letters one unit
    i++;
  }

  return 0; // end prgram (never reaches because endless loop)
}
