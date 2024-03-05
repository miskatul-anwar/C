#include "miskat.h"

//dynamically creating a data-structure
typedef struct node{
  int number;
  struct node *next;
}
  node;
int main(void){
  //for safety initialize from null
  node *list = NULL;

  //Now, add a number to the list 
  node *n = malloc(sizeof(node));
  if(n == NULL){
    //handle memory allocation error
    return 1;
  }
  n->number = 1;
  n->next = NULL;

  //update the list to point to new node
  n = malloc(sizeof(node));
  if(n==NULL){
    //handle memory allocation error
    free(list);
    return 1;
  }
  n->number = 2;
  n->next = NULL;
  list->next = n;
}
