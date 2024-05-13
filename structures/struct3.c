#include <stdio.h>

// usr defined
typedef struct data {
  char *name;
  int id;
  float cgpa;
} data;

// function prototype
void printdata(data student);

// body
int main(void) {
  struct data student = {"Miskatul Anwar", 53, 2.00};
  printdata(student);
}

// function definition
void printdata(struct data student) {
  printf("The data:\n");
  printf("%s\nID= %10d\nCGPA= %10.2f\n", student.name, student.id,
         student.cgpa);
}
