#include <stdint.h>
#include <stdio.h>

int main(void) {
  int age;
  printf("Please enter your age, to vote:");
  scanf("%d", &age);

  if (age >= 18) {
    printf("You can proceed to vote\n");
  } else {

    printf("Unfortunately you can not vote, as at %d you are too young\n", age);
  }
  return 0;
}
