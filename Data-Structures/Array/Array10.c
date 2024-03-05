#include<stdio.h>
int main()
{
    int col, row, matrix[10][10];
    printf("row = ");
    scanf("%d", &row);
    printf("col = ");
    scanf("%d", &col);
    for(int i =0; i<=20; i++)
    {
        printf("*");
    }
    printf("\n");

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("matrix[%d][%d] = ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    for(int i =0; i<=20; i++)
    {
        printf("*");
    }
    printf("\n");

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}