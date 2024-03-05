#include <stdio.h>
struct data {
  char name[20];
  float salary;
  int age;
};
int main(void) {
  struct data person1 = {"Miskatul Anwar", 20000.00, 25};
  struct data person2 = {"debashish", 23000, 24};
  printf("%s\t%f\t%d\n", person1.name, person1.salary, person1.age);
  return 0;
}
