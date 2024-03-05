#include<stdio.h>
int main()
{
    int i, j;
    int matrix[3][3];
    printf("Enter the arguments of the matrix accordingly:\n");
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j<3 ;j++)
        {
        printf("matrix[%d][%d] = ", i, j);
        scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j<3 ;j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    int sum =0;
    for(i = 0; i < 3  ; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i == j)
            {
                sum += matrix[i][j];
            }
        }
    }
        printf("The sum of the diagonal elements is: %d\n", sum);
   return 0;
}