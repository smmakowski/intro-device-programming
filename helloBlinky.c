#include <wiringPi.h>
#include <stdio.h>

int main(void) {
  wiringPiSetup(); // init wiring pi standard pin definitons
  pinMode(0, OUTPUT); // inits GPIO pin 0 as output

  for (;;) {
    digitalWrite(0, HIGH); // turns pin on
    // printf("Pin should be one!");
    delay(500);  // 500ms delay
    digitalWrite(0, LOW); // turns pin off
    // printf("Pin should be off");
    delay(500);
  }

  return 0; // end prgram (never reaches because endless loop)
}
