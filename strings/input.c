#include <stdint.h>
#include <stdio.h>

int main(void) {
  char name[30];
  printf("Enter Your name:");
  scanf("%[^\n]s", &name);

  printf("Name is %s\n", name);

  for (uint32_t i = 0; i < 30; i++) {
    printf("%c\n", name[i]);
  }
  return 0;
}
