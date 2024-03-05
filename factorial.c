#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("\n");
    printf("%d! = ",n);
    int factorial = 1;
    for(int i=1; i<=n; i++)
    {
        factorial = factorial * i;
    }
    printf("%d",factorial);
    printf("\n");
    return 0;
}
