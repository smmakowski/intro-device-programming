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
    // if button is  not alrady pressed
    if (digitalRead(1) == HIGH && isPressed == 0) {
        digitalWrite(2, HIGH);
        isPressed = 1; // set pressed state
    } else if (digitalRead(1) == LOW && isPressed == 1) {
        printf("THAT WAY EASY");
        digitalWrite(2, LOW);
        isPressed = 0;
    }
  }

  return 0;
}
