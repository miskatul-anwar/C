#include<stdio.h>
main()
{
    int n, sum;
    sum=0;
    n=1;
    while(n<=100)
    {
        sum=sum+n;
        n=n+1;
    }
    printf("Result:%d\n", sum);
    return 0;
}
