/*this is a program of conditions*/
#include <stdio.h>
int main() {
  float n1, n2;
  printf("Enter two numbers to calculate [n1-n2]=?\n");
  printf("n1=");
  scanf("%f", &n1);
  printf("n2=");
  scanf("%f", &n2);
  if (n1 >= n2) {
    printf("n1-n2=%f", n1 - n2);
  } else {
    printf("minus value can't be displayed");
  }
  return 0;
}
