#include <stdio.h>
#include <math.h>
main()
{
    float n, total;
    printf("Enter a value:");
    scanf("%f",&n);
    total =(n*((4*n*n)-1))/3;
    printf("1^2+3^2+5^2+....+(2*%f-1)^2)=%f\n",n,total);
    return 0;
}
