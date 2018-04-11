#include <wiringPi.h>
#include <stdio.h>

int main() {
  // setup wiringPi and set GPIO pins
 wiringPiSetup();
  pinMode(0, OUTPUT); // constantly is on when program is running
  pinMode(1, INPUT); // recieves input if switch is closed
  pinMode(2, OUTPUT); // outputs  high signal when switch is turned on

  int isPressed = 0; // start pressed state as false

  digitalWrite(0, HIGH); // turn output on

  for (;;) {
    // if button is pressed
    if (digitalRead(1) == HIGH) {
       // digitalWrite(2, HIGH);
       // isPressed = 1; // set pressed state
      if (isPressed == 0) {
        printf("THAT WAS EASY!\n");
        digitalWrite(2, HIGH);
        isPressed = 1;
      } else { /*do nothing since pressed*/ }
    } else { // if button not pressed
      if (isPressed == 1) {
        digitalWrite(2, LOW);
        isPressed = 0;
      } else { /* do nothing since already unpressed*/ }
    }
  }

  return 0;
}

/*
NOTE: Regaarding printf();
stdout is linebuffered meaning it tries to put off writing data until a newline.
if no newline is every  outputted stdout will just keep buffering text u
intil it runs out of space. Add '\n' at end of print line statments or call stdout
after printing to complete output

*/
