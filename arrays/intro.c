#include <stdint.h>
#include <stdio.h>
void array_display(uint8_t *, uint32_t);
int main(void) {
  uint8_t someData[10] = {0xff, 0xff, 0xff, 0xff, 0xff,
                          0xff, 0xff, 0xff, 0xff, 0xff};

  printf("Second data = %#x\n", *(someData + 1));
  *(someData + 1) = 0x9;

  printf("Second data = %#x\n", someData[1]);

  uint32_t nItems = sizeof(someData) / sizeof(uint8_t);

  array_display(&someData[2], nItems - 2);
  printf("\n");

  return 0;
}

void array_display(uint8_t *someData, uint32_t nItems) {
  for (int8_t i = 0; i < nItems; i++) {
    printf("%#x\t", someData[i]);
  }
}
