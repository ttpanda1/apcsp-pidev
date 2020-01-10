#include <stdio.h>

struct Student {
  char firstName[50];
  char lastName[50];
  int age[5];
  int studentID[30];
};

void printStudent(struct Student* student);

int main() {
  struct Student Student1;

  printStudent( Student1 );
}

void printStudent(struct Student* student) {
  printf("first name is:%s\n", student->firstName);
  printf("last name is:%s\n", student->lastName);
  printf("age:%s\n", student->age);
  printf("student ID:%s\n",student->studentID);
}
