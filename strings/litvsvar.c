#include <stdint.h>
#include <stdio.h>

int main(void) {
  char msg1[] = "Hello how are you?";
  char *pMsg2 = "What is your name?";

  msg1[0] = 'b';
  // will cause a crash
  // we are changin ROM memory
  // pMsg2[0] = 'c';

  printf("Msg is: %s\n", msg1);
  printf("Address of 'msg1' = %p\n", &msg1);
  printf("Value of msg1 = %p\n", msg1);

  printf("Msg2 is: %s\n", pMsg2);
  printf("Address of 'msg2' = %p\n", &pMsg2);
  printf("Value of msg2 = %p\n", pMsg2);
  return 0;
}
