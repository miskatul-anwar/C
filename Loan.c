#include<stdio.h>
int main()
{
    double amount, rate, time, pay;
    printf("Enter the amount of loan:");
    scanf("%lf", &amount);
    printf("Enter the interest rate:");
    scanf("%lf", &rate);
    printf("Enter year:");
    scanf("%lf", &time);
    pay = amount + amount*(rate/100);
    printf("\nYou'll need to return %0.2lf bdt. after %0.2lf years\n", pay, time);
}