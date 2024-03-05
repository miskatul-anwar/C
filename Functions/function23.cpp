#include<stdio.h>
int mul(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int s = mul(n);
    printf("factorial: %d\n",s);
}
int mul(int n)
{
    if(n==1) return 1;
    return n*mul(n-1);
}
