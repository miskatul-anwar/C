#include<stdio.h>
int main()
{
    int matrix[5][3];
    int array[10];
    printf("Enter the values accordingly:\n");
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    printf("your entered data:\n");
    printf("\n");
    for(int i=0; i<5; i++)
    {

        for(int j=0; j<3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
           array[i] = array[i] + matrix[i][j];
        }
    }
    printf("\n");
    printf("Please, enter the student roll:");
    int m;
    float avarage;
    scanf("%d",&m);
    for (int  i = 0; i < m; i++)
    {
        if(i == m-1)
        {
            avarage = array[i]/3;
            printf("\nThe average of the student with roll %d is %f", m, avarage);
        }
    }
    
    printf("\n");
    printf("total marks of each student:\n");
    for(int i=0; i<5; i++)
    {
        printf("student[%d] = %d\n",i+1, array[i]);
    }
    printf("\n");
    printf("average marks of each student:\n");
    for(int i=0; i<5; i++)
    {
        printf("student[%d] = %d\n",i+1, array[i]/3);
    }
    printf("\n");
    printf("average marks of all student:\n");
    int temp = 0;
    for(int i=0; i<5; i++)
    {
       temp = temp + array[i];
    }
    printf("%d\n", temp/5);
    printf("\n");
    return 0;
}