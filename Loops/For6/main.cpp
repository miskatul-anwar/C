#include<stdio.h>
main()
{
    int i,n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}
