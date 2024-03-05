#include<stdio.h>
main()
{
    int numbers[10]={9,78,89,07,69,499};
    int i, sum;
    sum= 0;
    for(i=0; i<6;i=i+1)
    {
        sum=sum+numbers[i];
    }
    printf("Sum:%d\n",sum);
    return 0;
}
