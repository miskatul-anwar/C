#include<stdio.h>
main()
{
    float gross, tax, net;
    printf("gross salary=?");
    scanf("%f",&gross);
    tax=0.14*gross;
    net=gross-tax;
    printf("tax=%f",tax);
    printf("net=%f",net);
    return 0;
}
