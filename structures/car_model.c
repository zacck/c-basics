#include <stdint.h>
#include <stdio.h>

struct carModel {
  uint32_t carNumber;
  uint32_t carPrice;
  uint16_t carMaxSpeed;
  float carWeight;
};

int main(void) {
  struct carModel carBmw = {2001, 15000, 220, 1330};

  struct carModel carFord = {.carNumber = 4031,
                             .carPrice = 35000,
                             .carMaxSpeed = 160,
                             .carWeight = 1900.08};

  printf("BMW has the following stats \nNumber: %u, Price: %d, MaxSpeed: %d, "
         "Weight: %f \n",
         carBmw.carNumber, carBmw.carPrice, carBmw.carMaxSpeed,
         carBmw.carWeight);

  printf("Size of carModel is %lu\n", sizeof(struct carModel));

  return 0;
}
