#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void triangle();
void trapezoid();
void circle();
void square();
void rectangle();
void float_error();
float area;

int main(void) {
  char *my_message = "Welcome to the area program.\n"
                     "Use the following codes to calculate shape area \n"
                     "Triangle ---> t\n"
                     "Trapezoid ----> z\n"
                     "Circle ---> c\n"
                     "Square ---> s\n"
                     "Rectangle ----> r\n\n"
                     "Enter the code for the shape:";
  printf("%s", my_message);

  char option;

  scanf("%c", &option);

  switch (option) {
  case 't':
    triangle();
    break;
  case 'z':
    trapezoid();
    break;
  case 'c':
    circle();
    break;
  case 's':
    square();
    break;
  case 'r':
    rectangle();
    break;
  default:
    printf("Invalid option please see above for valid options");
  }

  return 0;
}

void square() {
  float side;
  printf("\nPlease enter your square side:");

  scanf("%f", &side) && side > 0 ? printf("Calculating...\n") : float_error();

  area = (side * side);

  printf("\nYour circle area is: %f\n", area);
}

void circle() {
  float radius;
  printf("\nPlease enter your circle radius:");

  scanf("%f", &radius) && radius > 0 ? printf("Calculating...\n")
                                     : float_error();

  area = (radius * radius) * 3.14;

  printf("\nYour circle area is: %f\n", area);
}
void trapezoid() {
  float fBase, sBase, height;
  printf("\nPlease enter your trapezoid first base: ");
  scanf("%f", &fBase) && fBase > 0
      ? printf("\nPlease enter your trapezoid second base: ")
      : float_error();
  scanf("%f", &sBase) && sBase > 0
      ? printf("\nPlease enter your trapezoid height base: ")
      : float_error();
  scanf("%f", &height) && height > 0 ? printf("Calculating...") : float_error();

  area = ((fBase + sBase) / 2) * height;

  printf("\nYour Trapezoid area is, %f\n", area);
}

void rectangle() {
  float length, height;
  printf("\nPlease enter your rectangle length: ");
  scanf("%f", &length) && length > 0
      ? printf("\nPlease enter your rectangle height: ")
      : float_error();
  scanf("%f", &height) && height > 0 ? printf("Calculating...") : float_error();

  area = (length * height);

  printf("\nThe area is %f", area);
}

void triangle() {
  float base, height;
  printf("\nPlease enter your triangles base: ");
  scanf("%f", &base) && base > 0
      ? printf("\nPlease enter your triangles height: ")
      : float_error();
  scanf("%f", &height) && height > 0 ? printf("Calculating...") : float_error();

  area = (base * height) / 2;

  printf("\nThe area is %f", area);
}

void float_error() {
  printf("Please enter a valid real number for this measurement\n");
  exit(1);
}
