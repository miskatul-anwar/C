#include<stdio.h>
main()
{
    float n;
    n=1;
    while(n<=100)
    {
        printf("%f\n",n);
        n=n+0.0001;
    }
    return 0;
}
