#include<stdio.h>
int main()
{
    int a=10, b=30;
    int *ptr1 = &a, *ptr2 = &b;
    int sum = *ptr1+*ptr2;
    printf("%d\n",sum);
    getchar();
}