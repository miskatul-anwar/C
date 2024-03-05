#include <stdio.h>
int main(void){
  FILE *ptr;


  char name[100];
  int id;
  char uname[100];


  ptr = fopen("Student2.txt", "w");
  printf("Enter Name: ");
  gets(name);
  printf("Enter ID: ");
  scanf("%d", &id);
  printf("Enter University name: ");
  scanf("%s",&uname);
  fprintf(ptr,"Name\tID\t\tUniversity\n");
  fprintf(ptr,"%s\t",name);
  fprintf(ptr,"%d\t",id);
  fprintf(ptr,"%s\t",uname);
  fclose(ptr);
  return 0;

}
