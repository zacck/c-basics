#include <math.h>
#include <stdio.h>

int main(void) {
  float first, second, third;

  printf("Enter your 3 numbers:");

  scanf("%f %f %f", &first, &second, &third);

  float average = (first + second + third) / 3;

  printf("\nYour average is: %f\n", average);

  printf("Press any key to exit\n");
  getchar();
  getchar();
  return 0;
}
