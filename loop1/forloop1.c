#include<stdio.h>
int main()
{
    int x, row, col;
    printf("How many rows?");
    scanf("%d",&x);
    for (row=1; row<=x; row++)
    {
     for (col=1; col<=x; col++)
     {
        if(col==1 || col==x || row==1 || row==x)
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