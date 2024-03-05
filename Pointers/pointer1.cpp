#include <stdio.h>
int main() {
  int age = 22;
  int *ptr = &age;
  printf("Value: %d\n", age);
  printf("Address: %d\n", &age);
  printf("Value: %d\n", *ptr);
  *ptr++;
  printf("Value: %d\n", age);
  printf("Address: %d\n", &age);
}
