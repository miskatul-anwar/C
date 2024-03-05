#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a number:");
    scanf("%d", &n);
    int factorial = 1;
    for(i=1;i<=n;i++)
    {
        factorial = factorial* i;
    }
    printf("Factorial = %d\n",factorial);
    return 0;
}

