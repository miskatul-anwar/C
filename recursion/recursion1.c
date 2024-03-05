#include<stdio.h>
int factorial(int x);
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d", &n);
  int s = factorial(n);
  printf("factorial of %d = %d\n", n, s);
}
int factorial(int x)
{
  if(x==1)
  {
    return 1;
  }
  int factnm1=factorial(x-1);
  int fact = factnm1*x;
  return fact;
}
