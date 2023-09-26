#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main(void) {
  int *pAddress = (int *)&g_data;

  pAddress = pAddress + 1;

  printf("Value of pAddress %p, value is %x\n", pAddress, *pAddress);
  return 0;
}
