#include "miskat.h"
typedef struct node{
  int number;
  struct node *link;
}
node;
int main(void){
  node *array = NULL;
  node *data = malloc(sizeof(node));
  if(data == NULL){
    //handle memory allocation error
    return 1;
  }

  data->number = 12;
  data->link = NULL;
  array = data;

  data = malloc(sizeof(node));
  if(data==NULL){
    //handle memory allocation error
    free(array);
    return 1;
  }
  data->number = 34;
  data->link = NULL;
  array->link = data;

  data=malloc(sizeof(node));
  if(data==NULL){
    //handle memory allocation error
    free(array);
    free(array->link);
    return 1;
  }
  data->number = 45;
  data->link = NULL;
  array->link->link = data;

  data = malloc(sizeof(node));
  if(data==NULL){
    //handle memory allocation error
    free(array);
    free(array->link->link);
    return 1;
  }
  data->number = 56;
  data->link = NULL;
  array->link->link->link = data;


  //Now, here comes the printing part
  node *tmp = array;
  for(;;){
    if(tmp != NULL){
      printf("%i ", tmp->number);
      tmp = tmp->link;
    }else{
      break;
    }
  }
  while(array != NULL){
    node *tmp = array->link;
    free(array);
    array = tmp;
  }
  return 0;
}
