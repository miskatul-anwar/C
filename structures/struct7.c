#include "stdio.h"
#include "stdlib.h"
#include "strings.h"
typedef struct data {
  char *name;
  int id;
} data;
int main(void) {
  data person1;
  data *ptr_person1 = &person1;
  ptr_person1->name = malloc(10 * size(char));
}
