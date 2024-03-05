#include<stdio.h>
#define n 10
int main(void)
{
  int i=1;
  for(;;)
  {
    printf("%d",i);

    if(i==0)
      {
      break;
    }
    i++;
  }
  return 0;
}
