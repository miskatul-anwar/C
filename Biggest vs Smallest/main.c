#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter four numbers:\n");
    scanf("%d%d%d%d%",&a,&b,&c,&d);
    if (a>b && a>c && a>d)
    {
    printf("Largest number:%d",a);
    }
    else if(b>a && b>c && b>d)
    {
    printf("Largest number:%d",b);
    }
    else if (c>a && c>b && c>d)
    {
    printf("Largest number:%d",c);
    }
    else if (d>a && d>b && d>c)
    {
    printf("Largest number:%d",d);
    }
    if(a<b && a<c && a<d)
    {
    printf("Smallest number:%d",a);
    }
    else if(b<a && b<c && b<d)
    {
    printf("Smallest number:%d",b);
    }
    else if(c<a && c<b && c<d)
    {
    printf("Smallest number:%d",c);
    }
    else if(d<a && d<b && d<c)
    {
    printf("Smallest number:%d",d);
    }
    return 0;
}
