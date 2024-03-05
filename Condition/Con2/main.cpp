#include<stdio.h>
main()
{
    float n1, n2;
    printf("enter two numbers to be compared:\n");
    scanf("%f%f",&n1,&n2);
    if(n1==n2)
    {
        printf("n1 is equal to n2.\n");
    }
    else if(n1>n2)
    {
        printf("n1 is greater than n2.\n");
    }
    else if (n1<n2)
    {
        printf("n1 is less than n2.\n");
    }
    else
    {
        printf("n1 is not equal to n2.\n");
    }
    return 0;
}
