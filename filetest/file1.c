#include <stdio.h>
#include <stdlib.h>
int main(void) {
  FILE *file = fopen("Student.pdf", "w");
  if (file == NULL) {
    printf("down\n"); //--> return 2;
  } else {
    exit(3); //--> return 3;
  }
  int *s = malloc(4 * sizeof(int));
  int i = 0;
  printf("Type random text: ==>");
  for (;;) {
    if (i <= 4) {
      scanf("%d ", &s[i]);
    } else {
      break;
    }
    i++;
  }
  fprintf(file, "%d\n", *(s + 1));
  fclose(file);
  free(s);
  exit(1);
}
