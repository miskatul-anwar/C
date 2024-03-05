#include <string.h>
#include <stdio.h>

//user defined
typedef struct Computer_Science_and_Engineering{
  char *name;
  int id;
  float cgpa;
}cse;

//function prototype
void printinfo(cse student);

//body
int main(void){
  cse student = {"Miskatul Anwar", 23701053,2.50};
  printinfo(student);
  return 0;
}

//function definition
void printinfo(cse student){
  printf("Student Info: \n%s\nID: %10d\nCGPA: %10.2f\n",student.name,student.id,student.cgpa);
}

