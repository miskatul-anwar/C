#include<stdio.h>
int sum(int a , int b);
int main()
{
    int a, b, s;
	printf("Enter Two Numbers to add:\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    s = sum(a, b);
    printf("a + b = %d\n",s);
}
int sum(int a, int b)
{
    return a + b;
}
