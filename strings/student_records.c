#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

void display_menu(void);
void display_records(void);
void add_new_record(void);

typedef struct {
  uint32_t rollNumber;
  uint32_t studentSemister;
  char studentDOB[15];
  char studentName[50];
  char branch[50];
} Student_t;

Student_t student_list[10] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}};

int menu_option = 0;

int main(void) {
  printf("Welcome to Student Records:\n");
  display_menu();

  while (menu_option == 0) {
    if (!scanf("%d", &menu_option)) {
      printf("Invalid Option \n");
      display_menu();
    }
    switch (menu_option) {
    case 1:
      display_records();
      break;
    case 2:
      add_new_record();
      break;
    case 3:
      printf("opt3");
      break;
    case 4:
      printf("Exiting \n");
      return 0;
      break;
    default:
      printf("Invalid Option \n");
      display_menu();
    }
  }
}

void delete_record(void) {}

void add_new_record(void) {
  Student_t new_student;
  int free_index;
  // find first 0 roll number
  for (int i = 0; i < 10; i++) {
    if (student_list[i].rollNumber == 0) {
      free_index = i;
      break;
    }
  }
  // insert data into free index
  printf("Enter Rollnumber: ");
  scanf("%d", &new_student.rollNumber);
  printf("\nEnter semister: ");
  scanf("%d", &new_student.studentSemister);
  printf("\nEnter Date of Birth:");
  scanf("%s", new_student.studentDOB);
  printf("\nEnter Branch:");
  scanf("\n%[^\n]s", new_student.branch);
  printf("\nEnter name:");
  scanf("\n%[^\n]s", new_student.studentName);

  student_list[free_index] = new_student;
  menu_option = 0;
  display_menu();
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
  } else {
    for (int i = 0; i < 10; i++) {
      if (student_list[i].rollNumber != 0) {
        printf("***********\n");
        printf("rollNumber        :%d\n", student_list[i].rollNumber);
        printf("studentSemister   :%d\n", student_list[i].studentSemister);
        printf("studentDOB        :%s\n", student_list[i].studentDOB);
        printf("studentBranch     :%s\n", student_list[i].branch);
        printf("studentName       :%s\n", student_list[i].studentName);
        printf("***********\n");
      }
    }
  }
  menu_option = 0;
  display_menu();
}

void display_menu(void) {
  printf("Display all records -->1\n");
  printf("Add new Record      -->2\n");
  printf("Delete a Record     -->3\n");
  printf("Exit Application    -->4\n");
  printf("Enter Your Option Here:");
}
