#include <stdio.h>
#include <string.h>
int main() {
  char str_name_for[30];
  printf("Enter your name: ");
  fgets(str_name_for, 100, stdin);
  char str_name_rev[30];
  int len = strlen(str_name_for);
  for (int i = 0; i <= len - 1; i++) {
    str_name_rev[i] = str_name_for[len - 1 - i];
  }
  // this string is now reversed
  int cop_str = strcmp(str_name_for, str_name_rev);
  cop_str == 0 ? printf("Identical.") : printf("Not Equivalent.");
}
