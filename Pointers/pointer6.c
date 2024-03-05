#include <stdio.h>
int main()
{
  int a=6, b=7, *ptr_v1, *ptr_v2, temp;
  ptr_v1 = &a;
  ptr_v2 = &b;
  temp = *ptr_v1;
  *ptr_v1 = *ptr_v2;
  *ptr_v2 = temp;
  printf("%d\n", *ptr_v1);
  printf("%d\n", *ptr_v2);

}
