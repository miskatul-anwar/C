#include<stdio.h>
main()
{
    int i, n;
    scanf("%d",&n);
    for(i=1;i<=10;i=i+1)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}
