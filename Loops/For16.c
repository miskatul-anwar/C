#include<stdio.h>
int main()
{
    int row, col, n;
    printf("n=");
    scanf("%d", &n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            if(col=1 || row==n || col==row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}