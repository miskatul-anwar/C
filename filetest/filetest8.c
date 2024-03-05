#include <stdio.h>
int main(void){
  //file part
  FILE *fptr;
  fptr = fopen("Student.txt", "w");
  
  //user variables
  char name[100];
  int age;
  float cgpa;


  printf("Enter name: ");
  scanf("%s", &name);
  printf("Enter age: ");
  scanf("%d", &age);
  printf("Enter CGPA: ");
  scanf("%f", &cgpa);

  fprintf(fptr,"Name\tAge\tcgpa\n");
  fprintf(fptr, "%s\t", name);
  fprintf(fptr, "%d\t", age);
  fprintf(fptr, "%.2f", cgpa);


  fclose(fptr);
  return 0;
}

