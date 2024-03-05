#include "miskat.h"
struct data {
  char *name;
  int ID;
  char *uname;
};

int main(void) {
  struct data person1;
  struct data *ptr_person1 = &person1;
  ptr_person1->ID = 53;
  printf("%i", ptr_person1->ID);
  return 0;
}
