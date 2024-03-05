#include <stdio.h>
typedef struct data{
  int number;
}
  data;
int main(void){
  data person;
  data *ptr_person = &person;
  ptr_person->number = 56;
  printf("data = %i\n", ptr_person->number);
  return 0;
}

