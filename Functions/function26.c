#include<stdio.h>
int main()
{
  int factorial, n;
  printf("Enter a number to print it's factorial:");
  scanf("%d", &n);
  factorial = 1;
  for(int i=1;i<=n; i++)
  {
    factorial =factorial*i;
  }
  printf("%d\n", factorial);
  return 0;
}
