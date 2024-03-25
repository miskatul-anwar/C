#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0,
      seven = 0, eight = 0, nine = 0;
  char string[1000];
  gets(string);
  int len = strlen(string);
  for (int i = 0; i < len; i++) {
    if (string[i] == '0') {
      zero++;
    }
    if (string[i] == '1') {
      one++;
    }
    if (string[i] == '2') {
      two++;
    }
    if (string[i] == '3') {
      three++;
    }
    if (string[i] == '4') {
      four++;
    }
    if (string[i] == '5') {
      five++;
    }
    if (string[i] == '6') {
      six++;
    }
    if (string[i] == '7') {
      seven++;
    }
    if (string[i] == '8') {
      eight++;
    }
    if (string[i] == '9') {
      nine++;
    }
  }
  printf("%d %d %d %d %d %d %d %d %d %d\n", zero, one, two, three, four, five,
         six, seven, eight, nine);
  return 0;
}
