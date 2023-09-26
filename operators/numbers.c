#include <stdint.h>
#include <stdio.h>

int main(void) {
  float first, second;

  printf("Please enter the first number:");
  if (scanf("%f", &first) == 0) {
    printf("\nInvalid input Exiting!...\n");
    return 0;
  }

  printf("\nPlease enter the second number:");
  if (scanf("%f", &second) == 0) {
    printf("\nInvalid input Exiting!...\n");
    return 0;
  }

  int32_t nFirst, nSecond;

  nFirst = (int32_t)first;
  nSecond = (int32_t)second;

  if (nFirst != first || nSecond != second)
    printf("Warning! Comparing only integers\n");

  if (nFirst == nSecond) {
    printf("The numbers are equal: %d=%d\n", nFirst, nSecond);
  } else if (first > second) {
    printf("First is larger: %d>%d\n", nFirst, nSecond);
  } else {
    printf("Second is larger: %d>%d\n", nSecond, nFirst);
  }
  return 0;
}
