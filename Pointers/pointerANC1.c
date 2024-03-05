#include <stdio.h>
int main()
{
  int a=5;
  int *p; //*p=a
  p = &a;
  *p =*p *a;
  printf("%d",a);
}
