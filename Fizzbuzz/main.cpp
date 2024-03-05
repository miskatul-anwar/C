#include<stdio.h>
main()
{
    int num;
    printf("Enter a Number:");
    scanf("%f",&num);
    if(num%3==0 && num%5==0)
    {
        printf("FizzBuzz\n");
    }
    else if(num%3==0)
    {
        printf("Fizz");
    }
    else if(num%5==0)
    {
        printf("Buzz");
    }
    else
    {
        printf("No result");
    }
}
