#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

void display_menu(void);
void display_records(void);

typedef struct {
  uint32_t rollNumber;
  uint32_t studentSemister;
  char studentDOB[15];
  char studentName[50];
  char branch[50];
} Student_t;

Student_t student_list[10] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}};

int main(void) {
  int menu_option;

  printf("Welcome to Student Records:\n");
  display_menu();

  if (!scanf("%d", &menu_option)) {
    printf("Invalid Option \n");
    display_menu();
  }
  switch (menu_option) {
  case 1:
    printf("opt1");
    break;
  case 2:
    printf("opt2");
    break;
  case 3:
    printf("opt3");
    break;
  case 4:
    printf("opt4");
    break;
  default:
    printf("Invalid Option \n");
    display_menu();
  }

  return 0;
}

void display_records(void) {
  bool isEmpty = true;
  for (int i = 0; i < 10; i++) {
    if (student_list[i].rollNumber != 0)
      isEmpty = false;
  }
  if (isEmpty) {
    printf("There are no records to display\n");
    display_menu();
  }
}

void display_menu(void) {
  printf("Display all records -->1\n");
  printf("Add new Record      -->2\n");
  printf("Delete a Record     -->3\n");
  printf("Exit Application    -->4\n");
}
