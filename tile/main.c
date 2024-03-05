#include<stdio.h>
#include<math.h>
main()
{
    int i;
    double a ,b , c ,d, salary, gross;
    printf("Gross Amount:");
    scanf("%lf",&gross);
    for(i=1;i<=40;i++)
    {
       printf("*",i);
    }
    a = gross* 5/100;
    b = 750;
    c = gross* 20/100;
    d = 200;

    printf("\nRetirement Plan         :   -%.2lf  AED\n",a);
    printf("Health Insurance        :   -%.2lf  AED\n",b);
    printf("Housing Allowence       :   +%.2lf AED\n",c);
    printf("Transportation Allowence:   +%.2lf  AED\n",d);
    for(i=1;i<=40;i++)
    {
       printf("*",i);
    }
    salary = gross - a - b + c + d;
    printf("\nNet salary              :    %.2lf AED\n",salary);
    return 0;
}
