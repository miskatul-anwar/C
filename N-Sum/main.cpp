#include<stdio.h>
main()
{
    int i,n,sum;
    printf("Enter Number:");
    scanf("%d",&n);
    sum=0;
    for(i=0;;i++)
    {
        sum=sum+i;
        printf("Sum=%d\n",sum);
    }
     
    return 0;
}
