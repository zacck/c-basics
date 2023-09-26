#include <stdint.h>
#include <stdio.h>

int main(void) {
  int entered;
  printf("Enter a number to check even or odd: ");
  scanf("%d", &entered);
  if (entered & 1) {
    printf("\nThis number is odd\n");
  } else {
    printf("\nThis number is even\n");
  }
  return 0;
}
