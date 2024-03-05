#include<stdio.h>
int mul(int x);
int main()
{
   int n;
   printf("Enter how many times yow want: ");
   scanf("%d",&n);
   printf("It'll print %d times: \n",n);
   mul(n);
}
int mul(int x)
{
    if(x ==0)
    {
        return 0;
    }
    printf("I Love you....!\n");
    int mul1 = mul(x-1);
    int mul2 = mul1 + x;
}