#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter a number to find square value of it:");
    scanf("%d", &a);
    int s = square(a);
    printf("Square of %d is %d\n", a, s);
    return 0;
}

int square(int x)
{
    return x*x;
}