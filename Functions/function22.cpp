#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number to calculate it's factorial:");
    scanf("%d", &n);
    int s = factorial(n);
    printf("%d\n", s);
    return 0;
}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int fact = factorial(n - 1 );
    int fact2 = fact*n;
    return fact2;
}