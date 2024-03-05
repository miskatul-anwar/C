/*This is a program to calculate the salary of an employee*/
#include<stdio.h>
main()
{
    float gross,tax,net;
    printf("gross salary=?");
    scanf("%f",&gross);
    tax=0.14*gross;
    net=gross-tax;
    printf("tax=%f\n",tax);
    printf("net=%f",net);
    return 0;
}
