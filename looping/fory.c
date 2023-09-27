#include <stdint.h>
#include <stdio.h>

int main(void) {

  int lower;
  int upper;

  printf("Enter the lower boundary: ");
  if (!scanf("%d", &lower)) {
    printf("\nInvalid input Exiting...\n");
    return 1;
  }

  printf("\nEnter the upper boundary: ");
  if (!scanf("%d", &upper)) {
    printf("\nInvalid input Exiting...\n");
    return 1;
  }

  if (lower > upper) {
    printf("Lower bound is higher than upper bound, nothing to do, Exiting\n");
    return 1;
  }

  for (; lower <= upper; lower++) {
    printf("The current number is: %d\n", lower);
  }

  return 0;
}
