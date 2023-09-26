#include <stdint.h>
#include <stdio.h>

float calculate_tax(int);

int main(void) {
  long long int income;
  float tax_amount;

  printf("Please enter your income for tax payable calculation:");
  if (!scanf("%lld", &income)) {
    printf("Invalid input. \nExiting!... \n");
    return 0;
  }

  if (income < 9525) {
    printf("\nYour payable tax is 0 \n");
  } else if (income <= 38700) {
    tax_amount = calculate_tax(income);
    printf("\nYour payable tax is %f \n", tax_amount);
  } else if (income <= 82500) {
    tax_amount = calculate_tax(income);
    printf("\nYour payable tax is %f \n", tax_amount);
  } else {
    tax_amount = calculate_tax(income);
    printf("\nYour payable tax is %f \n", tax_amount);
  }

  return 0;
}

float calculate_tax(int income) {
  float tax_amount;
  tax_amount = income * (12 / 100.00);
  if (income > 82500)
    tax_amount = tax_amount + 1000;
  return tax_amount;
}
