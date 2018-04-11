#include <wiringpi.h>
#include <stdio.h>

int main() {
  wiringPiSetup();
  if (wiringPiSetup() == -1) {
    return 1; // exit with error code if no wiring pi
  }

  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  // arrays for light configs for 1-10 in binary
  int val1[] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
  int val2[] = {0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1};
  int val4[] = {0, 0. 0, 0, 1, 1, 0, 1, 0, 0, 0};
  int val8[] = {0, 0, 0, 0, 0, 0, 0, 0, 1. 1, 1};

  // HIGH and LOW in wiringPi can also be intereted as 1 and 0
}

