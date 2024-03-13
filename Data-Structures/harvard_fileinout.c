// open file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  FILE *file = fopen("Student.pdf", "w+");
  if (!file) {
    return 1;
  } else {
    // Get name and number
    char *name = malloc(1 * sizeof(char *));
    printf("Enter a name: ");
    scanf("%s", name);
    char *number = malloc(1 * sizeof(char *));
    printf("Enter a number: ");
    scanf("%s", number);
    // Print to file
    int len = strlen(name);
    int len2 = strlen(number);
    for (int i = 0, j = 0; i < len || j < len2; i++, j++) {
      fprintf(file, "%c\n", *(name + i));
      fprintf(file, "%c\n", *(number + j));
    }
  }
}
