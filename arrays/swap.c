#include <stdint.h>
#include <stdio.h>
void array_display(uint32_t *someData, uint32_t nItems);
void swap_array(uint32_t *array1, uint32_t *array2, uint32_t nItems1,
                uint32_t nItems2);

int main(void) {
  uint32_t size1, size2;

  printf("Array swapper:\n");
  printf("Enter the number of elements array 1 and 2 have:");

  if (!scanf("%d %d", &size1, &size2)) {
    printf("Invalid size input\n");
    return 1;
  }

  if ((size1 < 0) || (size2 < 0)) {
    printf("Invalid size input, cannot be negative\n");
    return 1;
  }

  uint32_t array1[size1];
  uint32_t array2[size2];

  for (uint32_t i = 0; i < size1; i++) {
    printf("Enter element %d of Array1:", i);
    if (!scanf("%d", &array1[i])) {
      printf("Invalid element input Exiting\n");
      return 1;
    }
  }

  for (uint32_t j = 0; j < size2; j++) {
    printf("Enter element %d of Array2:", j);
    if (!scanf("%d", &array2[j])) {
      printf("Invalid element input Exiting\n");
      return 1;
    }
  }

  printf("Arr1 \n");

  array_display(array1, size1);

  printf("Arr 2\n");
  array_display(array2, size2);

  printf("Contents after swap: \n");
  printf("\nArr1 \n");

  swap_array(array1, array2, size1, size2);

  array_display(array1, size1);

  printf("\nArr2 \n");
  array_display(array2, size2);
  printf("\n");
  return 0;
}

void swap_array(uint32_t *array1, uint32_t *array2, uint32_t nItems1,
                uint32_t nItems2) {
  uint32_t len = nItems1 < nItems2 ? nItems1 : nItems2;

  for (uint32_t i = 0; i < len; i++) {
    uint32_t temp = array1[i];
    array1[i] = array2[i];
    array2[i] = temp;
  }
}

void array_display(uint32_t *someData, uint32_t nItems) {
  for (uint32_t i = 0; i < nItems; i++) {
    printf("%d\t", someData[i]);
  }
}
