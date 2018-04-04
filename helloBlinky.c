#include <wiringPi.h>

int main(void) {
  wiringPiSetup(); // init wiring pi standard pin definitons
  pinMode(0, OUTPUT); // inits GPIO pin 0 as output
  
  while(true) {
    digitalWrite(0, HIGH); // turns pin on
    delay(500);  // 500ms delay
    digitalWrite(0, LOW); // turns pin off
    delay(500);
  }

  return 0; // end prgram (never reaches because endless loop)
}
