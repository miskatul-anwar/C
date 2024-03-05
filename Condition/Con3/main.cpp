/*a program to practice conditions*/
#include<stdio.h>
main()
{
    float n1, n2;
    printf("Enter to numbers to calculate(n1-n2)=?\n");
    printf("n1=");
    scanf("%f",&n1);
    printf("n2=");
    scanf("%f",&n2);
    if(n1==n2)
    {
        printf("They are equal.\n");
    }
    else
    {
        printf("n1-n2=%f\n",n1-n2);
    }
    return 0;
}
