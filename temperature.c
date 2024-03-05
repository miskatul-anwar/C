#include<stdio.h>
int main()
{
	double c, f;
	printf("Enter temperature in celsius:");
	scanf("%lf" , &c);
	f = 1.8 * c + 32;
	printf("Temperature in Fahrenheit is:%0.2lf \n ", f);
	return 0;
}
