#include <stdio.h>
int main() {
  int a;
  char c[] = "Programming with C";
  for (a = 0; c[a] != '\0'; ++a) {
    if (a % 2 > 0) {
      printf("%c", c[a] + 1);
    }
  }
}
