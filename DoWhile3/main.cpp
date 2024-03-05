#include<stdio.h>
main()
{
    int n,sum,i;
    sum=0;
    i=0;
    printf("Enter Number:");
    scanf("%d",&n);
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=n);
    printf("Sum=%d",sum);
    return 0;
}
