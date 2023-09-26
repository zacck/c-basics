#include <stdio.h>

int main(void) {

  // fload is 4 bytes 8 decimals
  // double is 8 bytes 15 decimals
  double number = 45.78976834578;

  printf("This float us %0.14lf\n", number);

  printf("This float us %e\n", number);

  printf("This float us %0.2lf\n", number);

  // use doublew for better precision
  double charE = -1.60217662e-19;

  printf("This charge is %0.8le\n", charE);

  return 0;
}
