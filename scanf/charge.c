#include <stdio.h>

int main(void) {
  double charge, chargeE, electrons;

  printf("Enter the charge:");
  scanf("%lf", &charge);

  printf("\nEnter the charge of an electron:");
  scanf("%le", &chargeE);

  electrons = (charge / chargeE) * -1;

  printf("Totdal number of electrons = %le\n", electrons);

  return 0;
}
