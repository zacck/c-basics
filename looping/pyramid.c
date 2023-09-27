#include <stdint.h>
#include <stdio.h>

int main(void) {
  uint32_t size;

  printf("Enter the size of your pyramid: ");

  if (!scanf("%d", &size)) {
    printf("\nInvalid input, Exiting!\n");
    return 1;
  }

  for (int i = 1; i <= size; i++) {
    int current = i;
    while (current > 0)
      printf("%4d", current--);
    printf("\n");
  }

  return 0;
}
