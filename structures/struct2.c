#include <stdio.h>

//user defined
struct data{
  char *name;
  int roll;
  float cgpa;
};

//function prototype
void printinfo(struct data s1);

int main(void){
  struct data s1 = {"Miskatul Anwar", 23701053, 3.5};
  printinfo(s1);

}

void printinfo(struct data s1){
  printf("Student info:\n");
  printf("%s\n", s1.name);
  printf("Roll= %10d\n",s1.roll);
  printf("CGPA= %10.2f\n",s1.cgpa);
}
