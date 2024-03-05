#include <stdio.h>

struct data{
  char name[100];
  int id;
  char department_name[200];
  char uni_name[100];
};

int printdata (struct data student);

int main(void){
  
}
int  printdata(struct data student[2]){
  for(int i=0;i<2;i++){
    printf("Enter The Data of persion %d: \n", i+1);
    printf("Enter Name:\n");
    gets(student[i].name);
    printf("Enter ID: \n");
    scanf("%d", &student[i].id);
    printf("Enter Department Name: \n");
    gets(student[i].department_name);
    printf("Enter University Name: \n");
    gets(student[i].uni_name); 
  }
}