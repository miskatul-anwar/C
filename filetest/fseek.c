#include <stdio.h>
int main(void) {
  FILE *file = fopen("ancsir.txt", "w");
  if (file == NULL) {
    // handle file allocaiton error
    printf("\033[43m"
           "Error creating the file.\n"
           "\033[0m");
    return 1;
    // return with an exit code
  }
  fseek(file, 4, SEEK_SET);

  char ch = fgetc(file);
  if (ch != EOF) {
    printf("\033[32,42m"
           "Your character is at position 5\n"
           "\033[0,0m");
  } else {
    printf("End of file reached or error reading file.\n");
  }
  fclose(file);
}
