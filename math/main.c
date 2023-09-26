#include "math.h"
#include <stdio.h>

int main() {
  int mult;

  mult = multiply(8, 8);

  printf("The multiplication is = %d \n", mult);

  int sum;

  sum = add(9, 9);

  printf("The result of add is = %d \n", sum);

  int diff;

  diff = subtract(67, 32);

  printf("The difference is = %d \n", diff);

  return 0;
}
