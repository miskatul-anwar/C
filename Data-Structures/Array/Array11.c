#include<stdio.h>
int main()
{
    int sum = 0;
    int mul[10][10];
    int matrix1[10][10] = {{1,2,3,4},{5,6,7,8}};
    int matrix2[10][10] = {{7,8,9,5},{4,6,8,4}};
    int i, j, k;
    for(i=0; i<4; i++)
    {
        for(j=0;j<4;j++)
        {
            sum = sum + matrix1[i][k] * matrix2[k][j];
            mul[i][j] = sum;
            sum = 0;
        }
    }
}