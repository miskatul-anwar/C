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
  head->link = NULL;

  //Adding 2nd element
  struct node *current = NULL;
  current = malloc(sizeof(struct node));
  current->data = 43;
  current->link = NULL;
  head->link = current;

  //Adding 3rd element
  struct node *current2  = NULL;
  current2 = malloc(sizeof(struct node));
  current2->data = 45;
  current2->link = NULL;
  current->link = current2;
  
  return 0;
  
}
