#include <stdio.h>

int main(void) {
  char char1, char2, char3, char4, char5, char6;
  printf("Enter 6 characters\n");

  char1 = getchar();
  char2 = getchar();
  char3 = getchar();
  char4 = getchar();
  char5 = getchar();
  char6 = getchar();
  // scanf("%c %c %c %c %c %c", &char1, &char2, &char3, &char4, &char5, &char6);

  printf("Your character codes are\n");
  printf("char: %c, code: %d\n", char1, char1);
  printf("char: %c, code: %d\n", char2, char2);
  printf("char: %c, code: %d\n", char3, char3);
  printf("char: %c, code: %d\n", char4, char4);
  printf("char: %c, code: %d\n", char5, char5);
  printf("char: %c, code: %d\n", char6, char6);

  return 0;
}
