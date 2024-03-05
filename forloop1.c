#include<stdio.h>
int main()
{
    int row, col, n;
    printf("How many rows you need?");
    //enter the amount of rows
    scanf("%d",&n);
    //now,write a loop to create a figure
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}