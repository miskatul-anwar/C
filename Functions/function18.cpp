#include<stdio.h>
int fibonacci(int x);
int main()
{
    int n;
    printf("Enter fibonacci number: ");
    scanf("%d",&n);
    printf("Fibonacci series: \n");
    fibonacci(n);
}
int fibonacci(int x)
{
    if(x == 0 || x == 1) 
    {
        if(x == 0)
        {
            return 0;
        }
        if(x == 1)
        {
            return 1;
        }
    }
    int fibonaccinm1 = fibonacci(x-1);
    int fibonaccinm2 = fibonacci(x-2);
    int fibonacci = fibonaccinm1+fibonaccinm2;
    printf("%d ",fibonacci);
    return fibonacci;
}