#include<stdio.h>
int printhello(int x);
int main()
{
  int n;
  printf("Enter how many times you need:");
  scanf("%d", &n);
  printhello(n);
  return 0;
}
int printhello(int x)
{
  if(x==0) return 0;
  printf("I Love you soooo much...!\n");
  return printhello(x-1);
}
