#include <stdint.h>
#include <stdio.h>

int main(void) {
  uint8_t myData = 20;

  if (myData > 40)
    printf("Value = %d\n", myData);

  myData++;

  printf("Mydata is %d\n", myData);

  return 0;
}
