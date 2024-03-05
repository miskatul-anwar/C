#include <stdio.h>
int main()
{
  int a=5,b=7,*ptr_pos1, *ptr_pos2;
  ptr_pos1 = &a;
  ptr_pos2 = &b;
  int sum = *ptr_pos1 + *ptr_pos2;
  printf("%d\n",sum);
}
