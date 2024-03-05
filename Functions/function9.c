#include<stdio.h>
int main()
{

    float price, net, s;
    void taka(price,net);
    printf("net price = %f\n", s);


}
void taka(float  price, float net)
{
   printf("Enter the price of the product:");
   scanf("%d", &price);
   net = price +price * 0.18;
   printf("The total price: %f\n", net);
}