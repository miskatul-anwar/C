#include "stdlib.h"
#include <stdio.h>
struct node {
  int data;
  struct node *link;
};

int main(void) {
  struct node *head = NULL;
  head = (struct node *)malloc(sizeof(struct node));
  head->data = 10;
}
