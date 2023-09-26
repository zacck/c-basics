#include <stdio.h>

int main(void) {
  char c = 100;

  // use address of operator to print address of char c
  printf("Our char address is: %p \n", &c);

  // valid pointer declaration, using address of `&` operator
  char *pChar = &c;

  // read data in the pointer
  char ourChar = *pChar;

  // print data in pointer
  printf("Our char  is: %d \n", ourChar);

  // change data in pointer
  *pChar = 65;

  // print new data in pointer
  printf("Our updated char is: %d \n", c);
}
