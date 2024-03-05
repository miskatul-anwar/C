#include<stdio.h>
int sum(int a, int b);
int main()
{
    int a =2 , b =3;
    int s =  sum(a, b);
    printf("Sum = %d\n", s);
}
int sum(int a, int b)
{
    return a+b;
}
