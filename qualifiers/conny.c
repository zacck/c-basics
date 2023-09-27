#include <stdint.h>
#include <stdio.h>

int main(void) {
  uint8_t const data = 10;

  printf("Const built and is %d \n", data);

  // this update only works for local consts
  // global consts cannot be updated as they are stored in ROM
  uint8_t *pData = (uint8_t *)&data;

  *pData = 50;

  printf("Const data updated to %d, using a pointer\n", data);

  return 0;
}
