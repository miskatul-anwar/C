#include<stdio.h>
int temp(int x);
int main()
{
    int c;
    printf("Enter celcius value: \n");
    scanf("%d", &c);
    temp(c);
}
int temp(int x)
{
    int temp =(9/5)*x + 32;
    printf("The Fahrenheit value is: %d\n", temp);
}