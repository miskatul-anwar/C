#include<stdio.h>

// Function declaration
int sumn(int a);

int main()
{
    printf("sum of 5 integers is %d\n", sumn(5));
    return 0;
}

int sumn(int a)
{
    if(a == 1) 
    {
        return 1;
    }
    int sum1 = sumn(a - 1);
    int sum = sum1 + a;
    printf("sum is %d\n", sum);
    return sum;
}
