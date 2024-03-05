#include "miskat.h"
typedef struct data{
  char *name;
  int id;
}
  data;
int main(void){
  data person1;
  data *ptr_person1 = &person1;
  ptr_person1->name = malloc(1*sizeof(char*));
  if(ptr_person1->name==NULL){
    //==>handle memory allocation error
    return 1;
  }
  printf("Name: ");
  get_string(ptr_person1->name,100) 
  ptr_person1->id = 45;
  printf("%s : %i\n",ptr_person1->name,ptr_person1->id);
  if(ptr_person1->name != NULL){
    free(ptr_person1->name);
  }
  return 0;
}

