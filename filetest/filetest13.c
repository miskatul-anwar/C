#include <stdio.h>
int main(void) {
  FILE *fp;
  fp = fopen("C:\\input.dat", "w");
  fputs("Computer Programming Language", fp);
  fclose(fp);
  fp = fopen("C:\\input.dat", "r");
  fseek(fp, 5L, 0);
  printf("%c\n", getc(fp));
  fseek(fp, 7L, 0);
  printf("%c\n", getc(fp));
  fseek(fp, 5L, 1);
  printf("%c\n", getc(fp));
  fseek(fp, -2L, 1);
  printf("%c\n", getc(fp));
  fclose(fp);
  return 0;
}
