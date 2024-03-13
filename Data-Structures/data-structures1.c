#include "miskat.h"

int main(void) {
  int *list = malloc(3 * sizeof(int));
  if (list == NULL) {
    // handle memory allocation error
    return 1;
  }
  *(list + 0) = 12;
  *(list + 1) = 34;
  *(list + 2) = 23;
  for (int i = 0; i < 3; i++) {
    printf("%i ", *(list + i));
  }
  printf("\n");
  // declare a temporary array
  int *temp = realloc(list, 4 * sizeof(int));
  // int *temp = malloc(4*sizeof(int));
  if (temp == NULL) {
    // handle memory allocation error
    return 1;
  }
  // add the desired variable to the *list named array
  *(temp + 3) = 45;
  list = temp;
  // Now, remember the whole array
  for (int i = 0; i < 4; i++) {
    printf("%i ", *(temp + i));
  }
  printf("\n");
  for (int i = 0; i < 4; i++) {
    printf("%i ", *(list + i));
  }
  return 0;
  free(temp);
  free(list);
}
