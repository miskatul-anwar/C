#include<stdio.h>
int main()
{
    int row, col, n;
    printf("n=");
    scanf("%d", &n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ", col);
        }
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}