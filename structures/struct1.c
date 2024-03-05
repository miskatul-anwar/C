#include <stdio.h>
//usr defined
struct student{
  char *name;
  int roll;
  float cgpa;
};
int main()
{
  struct student s1={"Miskatul Anwar", 23701053, 3.5};
  printf("%d", s1.roll);
  return 0;
}