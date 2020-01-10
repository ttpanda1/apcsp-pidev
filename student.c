#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
  char firstName[30];
  char lastName[30];
  int age;
  int studentID;
};

void printStudent(struct Student* students) {
  printf("Student name: %s %s, Age: %d, Student ID: %d\r\n", students->firstName, students->lastName, students->age, students->studentID);
}

int main() {
  
  int count = 0;
  char cont[10];
  char input[256];

  struct Student students[20];
  
  for ( int i = 0; i < 20; i++ ) {
    
    printf("First Name: ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", students[i].firstName);

    printf("Last Name: ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", students[i].lastName);

    printf("Age: ");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &students[i].age);

    printf("Student ID: ");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &students[i].studentID);

    printf("%s, %s, %d, %d\n", students[i].firstName, students[i].lastName, students[i].age, students[i].studentID);

    count++;

    printf("Do you wish to continue? Press n to stop.");
    fgets(input, 10, stdin);
    if ( sscanf(input, "%s", cont) == 1) {
      if ( strcmp(cont, "n") == 0) {
	  break;
        }       
    }
  }

  for (int r = 0; r < count; r++ ) {
    printStudent( &students[r] );
  }
}

