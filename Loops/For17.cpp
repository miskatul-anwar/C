#include "iostream"
#include "stdio.h"
using namespace std;

int main(void)
{
  int i=0,j=i-1;
  for(;;)
  {
    for(;;)
    {
      printf("%d ",j);
      j--;
      if(j==0)
      {
        break;
      }
    }
    printf("%d\n",i);
    i++;
    if(i>=10)
    {
      break;
    }
  }
  return 0;
}
