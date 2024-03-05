#include<stdio.h>
main()
{
    int n, sum;
    sum=0;
    n=0;
    while(n<=500)
    {
        if(n%2!=0)
        {
          printf("Result is:%d\n",sum);
        }
        sum=sum+n;
        n=n+1;
    }


     return 0;

}
