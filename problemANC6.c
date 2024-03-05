#include<stdio.h>
int main()
{
  int a,b,x=0;
  for(a=0;a<5;++a)
  {
    for(b=0;b<a;++b)
    {
      x +=(a+b-1);
      printf("%d ",x);
    }
    printf("\nx =%d ",x);
  }
}
