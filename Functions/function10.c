#include<stdio.h>
double add(double num1, double num2);
int main()
{
    double a, b, c;//declare a, b, c or it's up to your preferance
    //miskatul anwar
    printf("enter two numbers:\n");// You can skip this line
    printf("a = ");//Enter the first number
    scanf("%lf", &a);
    printf("b = ");//Enter the second number
    scanf("%lf", &b);
    c = add (a, b);//call the function add()
    printf("%0.2lf + %0.2lf = %0.2lf\n",a,b,c);//now print the result
}
double add(double num1, double num2)
{
    double sum = num1 + num2;
    return sum;
}