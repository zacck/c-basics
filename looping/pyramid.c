#include <stdint.h>
#include <stdio.h>

int main(void) {
  int size;

  printf("Enter the size of your pyramid: ");

  if (!scanf("%d", &size)) {
    printf("\nInvalid input, Exiting!\n");
    return 1;
  }

  if (size < 1) {
    printf("\nInvalid input, Exiting!\n");
    return 1;
  }

  for (uint32_t i = 1; i <= size; i++) {
    uint32_t current = i;
    while (current > 0)
      printf("%4d", current--);
    printf("\n");
  }

  return 0;
}
