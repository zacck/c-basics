#include <stdint.h>
#include <stdio.h>

typedef struct {
  uint32_t gpioAen : 1;
  uint32_t gpioBen : 1;
  uint32_t gpioCen : 1;
  uint32_t gpioDen : 1;
  uint32_t gpioEen : 1;
  uint32_t gpioFen : 1;
  uint32_t gpioGen : 1;
  uint32_t gpioHen : 1;
  uint32_t gpioIen : 1;
  uint32_t reserved1 : 3;
  uint32_t crcen : 1;
  uint32_t reserved2 : 5;
  uint32_t bkpseamen : 1;
  uint32_t reserved3 : 1;
  uint32_t ccmdataramen : 1;
  uint32_t dma1en : 1;
  uint32_t dma2en : 2;
  uint32_t reserved4 : 2;
  uint32_t ethmacen : 1;
  uint32_t ethmactxen : 1;
  uint32_t ethmacrxen : 1;
  uint32_t ethmaccptpen : 1;
  uint32_t otghsen : 1;
  uint32_t otgsulpien : 1;
  uint32_t reserved5 : 1;
} RCC_AHB1ENR_t;

int main(void) {
  printf("Wohoo");
  return 0;
}
