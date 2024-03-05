#include<stdio.h>
void calculateprice(float value);
int main()
{
    float value;
    printf("value=");
    scanf("%f", &value);
    calculateprice(value);
}
void calculateprice(float value)
{
    value = value + (value*0.18);
    printf("Total cost: %f\n", value);
}
