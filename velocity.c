#include<stdio.h>
int main()
{
    double v,t,s;
    printf("This programme will calculate the distance covered after 2t seconds.\n");
    printf("t=");
    //enter the value of t
    scanf("%lf",&t);
    printf("v=");
    //enter the value of v
    scanf("%lf",&v);
    /*we know, s=ut + 0.5xaxtxt. But the value 
    gets to s=2xtxv when we use 2t instead of t*/
    s = 2*t*v;
    printf("s=%0.2lf",s);
    return 0;

}