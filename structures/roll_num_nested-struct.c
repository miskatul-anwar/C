#include "stdio.h"
#include "stdlib.h"

typedef struct data {
  char *name;
  int id;
} data;

int main(int argc, char **argv) {
  int n = atoi(*(argv + 1));
  data student_data[] = {
      {"Abdullah Al Mamun Emon", 28},
      {"Syeed Hossain Sahil", 30},
      {"Debashish Chakraborty", 34},
      {"Jahid Alom Ridoy", 39},
  };
  data *ptr = student_data;
  for (int i = n; i <= n; i++) {
    ptr += n - 1;
    printf("%s : %d\n", ptr->name, ptr->id);
  }
  return 0;
}
