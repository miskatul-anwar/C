#include "miskat.h" 

//a general node for each element in the list1
typedef struct node{
  int number;
  struct node *link;
}
  node;
int main(void){
  node *darray = NULL; 
  node *n = malloc(sizeof(node));
  if(n == NULL){
    //handle memory allocation error
    return 1;
  }

  n->number = 23;
  n->link = NULL;

  //update the link to enter the next value
  darray = n;

  n = malloc(sizeof(node));
  if(n == NULL){
    //handle memory allocation error
    free(n);
    return 1;
  }
  n->number = 45;
  n->link = NULL;

  //update the link to enter the next value
  darray->link = n;

  n = malloc(sizeof(node));
  if(n == NULL){
    //handle memory allocation error
    free(n);
    free(darray->link);
    return 1;
  }
  n->number = 34;
  n->link = NULL;

  //update the link to enter the next value
  darray->link->link = n;
   
  n=malloc(sizeof(node));
  if(n==NULL){
    //handle memory allocation error
    free(n);
    free(darray->link->link);
    return 1;
  }
  n->number = 100;
  n->link = NULL;
  

  //update the list to enter the next value
  darray->link->link->link = n;

  //Now, printout the whole array
  node *tmp = darray;
  for(;;){
    if(tmp != NULL){
      printf("%i ", tmp->number);
      tmp = tmp->link;
    }else{
      break;
    }
  }
  while(darray != NULL){
    node *tmp = darray->link;
    free(darray);
    darray = tmp;
  }
  return 0;
}
