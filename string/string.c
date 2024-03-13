#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char *s1 = malloc(10);
  char *s2 = malloc(10);
  strcpy(s1, "Hi");
  strcpy(s2, "bye");
  strcat(s1, s2);
  int n = strcmp(s1, s2);
  // Now, print all the variables
  printf("%s %s %i\n", s1, s2, n);
  return 0;
}
