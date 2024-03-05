#include<stdio.h>
int factorial(int x);
int main()
{
  int n;
  printf("Give a number to calculate it's factorial:");
  scanf("%d",&n);
  int fact = factorial(n);
  printf("Factorial = %d\n", fact);
  return 0;
}
int factorial(int x)
{
  if(x==1 || x==0) return 1; 
  return x*factorial(x-1);
}
