#include<stdio.h>
int awkward(float num1);
int main()
{
    float x, c;
    printf("Enter price\n");
    scanf("%f",&c);
    x = awkward(c);
    printf("price (VAT added) of the product is: %f\n", x);
}
int awkward(float num1)
{
    float price = num1 + num1*0.18;
    return price;
}