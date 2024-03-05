#include "miskat.h"

typedef struct node {
  int number;
  struct node *next;
}
node;

int main(void){
  //list of size
  node *list = NULL;

  //Add a number to list
  node *n = malloc(sizeof(node));
  if(n == NULL){
    //handle memory allocation error
    return 1;
  }
  n->number = 1;
  n->next = NULL;

  //update list to point to new node
  list = n;

  //add a number to list 
  n = malloc(sizeof(node));
  if(n==NULL){
    //handle memory allocation error
    free(list);
    return 1;
  }
  n->number = 2;
  n->next = NULL;
  list->next = n;

  //add a number to list
  n = malloc(sizeof(node));
  if(n==NULL){
    //handle memory allocation error
    free(list);
    free(list->next);
    return 1;
  }
  n->number = 3;
  n->next = NULL; 
  list->next->next = n;

  //print numbers
  int i = 0;
  for(;;){
    if(i>=3){
      break;
    }else{
      printf("%i ",*(list+i));
      i++;
    }
  }
  printf("\n");

  //print numbers
  for(node *tmp = list; tmp != NULL; tmp = tmp->next){
    printf("%i ", tmp->number);
  }
  //free list 
  while (list != NULL){
    node *tmp = list->next;
    free(list);
    list = tmp;
  }
return 0;
}
