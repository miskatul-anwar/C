#include "stdio.h"
#include "stdlib.h"

typedef struct data {
  char *name;
  int code;
} data;

int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  if (n > 3) {
    printf("Invalid number of arguments\n");
    return -1;
  }
  data countrycode[] = {
      {"Bangladesh", 880},
      {"United States", 1},
      {"Saudi Arabia", 2},
  };
  data *ptr = countrycode;
  for (int i = 1; i <= n; i++) {
    printf("%s : %d\n", ptr->name, ptr->code);
    ptr++;
  }
  return 0;
}
