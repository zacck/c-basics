#include <stdint.h>
#include <stdio.h>

typedef struct {
  char data1;
  int data2;
  char data3;
  short data4;
} DataSet_t;

DataSet_t data;

void displayMemberElements(DataSet_t *pData);

int main(void) {

  data.data1 = 0xAA;
  data.data2 = 0xFFFFEEEE;
  data.data3 = 0x55;
  data.data4 = 0xA5A5;

  printf("Data3 is currently %X \n", data.data3);

  // pdata is a pointer variable fo type struct DataSet
  DataSet_t *pData;

  // pData now holds  the address of the structure variable data
  pData = &data;

  // changing the value of data3 element
  // using the deferencing operator (->)
  // used when a struct pointer
  pData->data3 = 0x66;

  printf("Updated data3 is now %X \n", data.data3);

  displayMemberElements(pData);

  return 0;
}

void displayMemberElements(DataSet_t *pData) {
  printf("Data1: %X\n", pData->data1);
  printf("Data2: %X\n", pData->data2);
  printf("Data3: %X\n", pData->data3);
  printf("Data4: %X\n", pData->data4);
}
