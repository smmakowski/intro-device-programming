#include <wiringPi.h>
#include <stdio.h>

#define STARTNUM 10

int main() {
  if (wiringPiSetup() == -1) {
    return 1; // exit with error code if no wiring pi
  } // else run program

  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  // arrays for light configs for 1-10 in binary
  int val1[] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
  int val2[] = {0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1};
  int val4[] = {0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0};
  int val8[] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1};

  // HIGH and LOW in wiringPi can also be intereted as 1 and 0

  // delay for 3 seconds before start
  printf("Pre-Countdown beginning!\n");
  delay(1000);

  for (int i = 3; i >= 1; i--) {
    printf("Actual Countdown in %d!\n", i);
    delay(1000);
  }

  // iterate backwards
  for (int i = STARTNUM; i >= 0; i--) {
    digitalWrite(0, val1[i]);
    digitalWrite(1, val2[i]);
    digitalWrite(2, val4[i]);
    digitalWrite(3, val8[i]);

    if (i > 0) {
      printf("Countdown is at %d! The binary is %d%d%d%d\n", i, val8[i], val4[i], val2[i], val1[i]);
    } else {
      printf("Countdown is finished!\n");
    }

    delay(1000);
  }

  return 0;
}

