#include "miskat.h"
#include <stdio.h>
#include <stdio.h>
int main()
{
  int a[5] = {1,2,3,4,5};
  int *ptr_array = &a[0];
  for(int i=0;i<5;i++)
  {
    printf("%d",*ptr_array);
    ptr_array++;
  }
  return 0;
}
