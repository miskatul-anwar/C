#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, A, B, C, D, F, G, H, m;
    scanf("%lf%lf%lf%lf", &a,&b,&c,&d);
    A=a-b;
    B=c+4*d;
    C=c+d;
    D=A*A;
    F=B*B;
    G=sqrt(D/F);
    H=sqrt(sqrt(A/C));
    m=G+H;
    printf("m=%.2lf", m);
    return 0;
}
