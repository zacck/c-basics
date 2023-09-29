#include <stdint.h>
#include <stdio.h>

struct DataSet {
  char data1;
  int data2;
  char data3;
  short data4;
} __attribute__((packed));

int main(void) {

  struct DataSet data;
  data.data1 = 0x11;
  data.data2 = 0xFFFFEEEE;
  data.data3 = 0x22;
  data.data4 = 0xABCD;

  uint8_t *ptr;

  ptr = (uint8_t *)&data;

  uint32_t total_size = sizeof(struct DataSet);
  printf("Memory address      Content\n");
  printf("===========================\n");

  for (uint32_t i = 0; i < total_size; i++) {
    printf("%p   %X\n", ptr, *ptr);
    ptr++;
  }

  printf("Total memory consumed by this struct variable = %lu\n",
         sizeof(struct DataSet));
  return 0;
}
