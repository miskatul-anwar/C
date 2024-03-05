#include <stdio.h>
int main()
{
  int a=5,b=7;
  int z=6;
  int *ptr_position = &z;
  int *p = &a;
  printf("%u\n", &p);
  printf("%u\n", &b);
  printf("%d\n", ptr_position);
}
