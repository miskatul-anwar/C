#include <stdio.h>
int main()
{
  int *ptr_position;
  int a=5, b=7, c=8;
  ptr_position = &a;
  printf("a = %d\n", *ptr_position);
  ptr_position = &b;
  printf("b = %d\n", *ptr_position);
  ptr_position = &c;
  printf("c = %d\n", *ptr_position);
  return 0;

}
