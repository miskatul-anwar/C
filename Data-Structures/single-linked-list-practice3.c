#include "miskat.h"
struct node{
  int data;
  struct node *link;
};
int main(void){
  struct node *head = NULL;
  head = malloc(sizeof(struct node));
  
  //Adding 1st element
  head->data = 34;
  head->link = NUll;

  //Adding 2nd element
  struct node *current = NULL;
  current = malloc(sizeof(struct node));
  current->data = 54;
  current->link=NULL;
  head->link = current;
  return 0;

}
