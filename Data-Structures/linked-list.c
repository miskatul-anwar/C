#include "miskat.h"
struct node {
  int number;
  struct node *link;
};
int main(void) {
  struct node *head = NULL;
  struct node *n = malloc(sizeof(struct node));
  if (n == NULL) {
    // handle memory allocation error
    return 1;
  }
  n->number = 45;
  n->link = NULL;

  // update the list to view the next element
  head = n;
  n = malloc(sizeof(struct node));
  if (n == NULL) {
    // handle memory allocation error
    free(head);
    return 1;
  }
  n->number = 56;
  n->link = NULL;
  head->link = n;

  // update the list to view the next element
  n = malloc(sizeof(struct node));
  if (n == NULL) {
    // handle memory allocation error
    free(head);
    free(head->link);
    return 1;
  }
  n->number = 67;
  n->link = NULL;
  head->link->link = n;

  // now show the numbers
  for (struct node *tmp = head; tmp != NULL; tmp = tmp->link) {
    printf("%i ", tmp->number);
  }
  return 0;
}
