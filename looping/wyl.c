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

  while (lower <= upper) {
    printf("Number i is: %d\n", lower);
    lower++;
  }

  return 0;
}
