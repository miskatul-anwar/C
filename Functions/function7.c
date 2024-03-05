#include<stdio.h>
int sum(int a, int b);
int main()
{
	int a, b, s;
	printf("a=");
	scanf("%d" ,&a);
	printf("b=");
	scanf("%d" ,&b);
	s =  sum(a, b);
	printf("a + b = %d\n", s);
	return 0;
}

int sum(int a , int b)
{
	return a + b;
}

