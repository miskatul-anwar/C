#include <stdio.h>
#include <math.h>
main()
{
    double a, b, c, d, e, f, g, h, A, B, C, D, F, m;
    printf("Enter four values:\n");
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    A = a - b;
    B = c + 4*d;
    C = c + d;
    e = A*A;
    f = B*B;
    D = sqrt(e/f);
    F = sqrt(sqrt(A/C));
    m = D + F;
    printf("The value of m according to the given numbers is:%0.2lf\n5",m);
}
