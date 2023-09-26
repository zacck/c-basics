#include <stdint.h>
#include <stdio.h>

int main(void) {
  int num, set_num;

  printf("Enter a number to set its 4th and 7th bits: ");
  scanf("%d", &num);

  set_num = num | 144;

  printf("\nThe entered numbers 0x%x The set number is: %d\n", num, set_num);

  return 0;
}
