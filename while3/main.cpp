#include<stdio.h>
main()
{
    int n;
    n=2;
    while(n<=100)
    {
        if (n%2==0)
        {
            printf("%d\n",n);
        }
        n=n+1;
    }
    return 0;
}
