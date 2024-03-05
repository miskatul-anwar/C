#include "stdio.h"

typedef struct data {
  char *name;
  int id;
  char *phone;
} data;

int main(int argc, char **argv) {
  data person = {"John", 123, "123-456-7890"};
  data *loc = &person;
  printf("%s %i %s ", loc->name, loc->id, loc->phone);
  return 0;
}
