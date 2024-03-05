#include<stdio.h>
int mul(int a);
int main()
{
    mul(12);
}
int mul(int a)
{
    if(a==0) return 0;
    int mul1 = mul(a - 1);
    int mul2 = mul1 + a;
    printf(" %d ", a);
}
