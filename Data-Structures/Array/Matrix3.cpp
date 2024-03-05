#include<stdio.h>
#define n 5
int main()
{
    //This program only works with 5x5 matrix
    int i, j;
    int matrix[n][n] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    printf("The given matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    //This is a program for spiral printing the elements of the matrix
    printf("The following elements are spriral printing:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i==0)
            {
                printf("%d ", matrix[i][j]);
            }
            else if(j==n-1)
            {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    for(i=n-1; i>=0; i--)
    {
        for(j=n-1; j>=0; j--)
        {
            if(i==j)
            {
                continue;
            }
            else if(i==n-1)
            {
                printf("%d ", matrix[i][j]);
            }
           else if(j==0 && i!=j)
           {
            printf("%d ", matrix[i][j]);
           }
        }
    }
    for(i=1; i<n; i++)
    {
        for(j=1; j<n-1; j++)
        {
            if(i==n-4 && j<=n-2)
            {
                printf("%d ",matrix[i][j]);
            }
            else if(j==n-2 && i!=n-1)
            {
                printf("%d ",matrix[i][j]);
            }
        }
    }
    for(i=n-2; i>=0; i--)
    {
        for(j=n-2; j>=n-4; j--)
        {
            if(i==n-2 && j<n-2)
            {
                printf("%d ",matrix[i][j]);
            }
            
            if(j==n-4 && i<n-2 && i>n-4)
            {
                printf("%d ",matrix[i][j]);
            }
        }
    }
    for(i=0; i<n-2; i++)
    {
        for(j=0; j<n-2; j++)
        {
            if(i==j && i>0 && j>0)
            {
                printf("%d ",matrix[i][j]);
            }
        }
    }
    printf("\n");
    printf("Thanks!\n");
}