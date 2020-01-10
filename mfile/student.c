#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

void printStudent(struct Student* students) {
  printf("Student name: %s %s, Age: %d, Student ID: %d\r\n", students->firstName, students->lastName, students->age, students->studentID);
}
