#include <stdint.h>
#include <stdio.h>

int main(void) {
  int num, cleared;

  printf("Enter a number to clear its bits: ");

  scanf("%d", &num);

  cleared = num & ~(112);

  printf("\nThe cleared num is: %d \n", cleared);

  return 0;
}
