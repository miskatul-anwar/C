#include<stdio.h>
int square(int x);
int triangle(int z, int v);
int circle(int j);

int main()
{
    int a, b, c;
    int area;
    printf("Enter the case number: ");
    scanf("%d", &area);
    switch (area)
    {
    case 1:
        printf("Enter the side of a square: ");
        scanf("%d", &a);
        c = square(a);
        printf("square of %d is %d\n", a, c);
        break;
    case 2:
         printf("Enter the sides of a triangle: ");
         scanf("%d %d", &a, &b);
         c = triangle(a, b);
         printf("triangle of %d and %d is %d\n", a, b, c);
         break;
    case 3:
        printf("Enter the radius:");
        scanf("%d", &a);
        c = circle(a);
        printf("circle of radius %d is %d\n",a,c);
        break;

    default:
        break;
    }
}
int square(int x)
{
    return x*x;
}
int triangle(int z, int v)
{
   return (z*v)/2;
}
int circle(int j)
{
    return 3.14*j*j;
}