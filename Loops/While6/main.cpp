#include<stdio.h>
main()
{
    int n, sum;
    sum=0;
    n=1;
    while(n<=500)
    {
        sum=sum+n;
        n=n+2;
    }
    printf("Result is:%d\n",sum);
    return 0;
}
