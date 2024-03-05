#include <stdio.h>
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
int main()
{
  int a=5,b=6;
  printf("Before swapping: a = %d b = %d\n",a,b);
  //print before swapping
  swap(&a,&b);//calling function
  printf("a = %d b = %d\n", a,b);
  //print after swapping
  return 0;
}
