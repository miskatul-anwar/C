#include "miskat.h"
struct node{
  int data;
  struct node *link;
};
int main(void){
  struct node *head = NULL;
  head = malloc(sizeof(struct node));

  //Adding data on the first element
  head->data = 45;
  head->link = NULL;

  //Adding data on the second element
  struct node *current = malloc(sizeof(struct node));
  current->data = 98;
  current->link = NULL;
  head->link = current;

  //Adding data on the second element
  struct node *current2 = malloc(sizeof(struct node));
  current2->data = 23;
  current2->link = NULL;
  current->link = current2;
  return 0;   
}
