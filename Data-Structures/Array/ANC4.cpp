#include<stdio.h>
int main()
{
    int matrix[4][7];
    int i, j, temp=0;
    printf("Enter database accordingly:\n");
    for (i = 0; i < 4; i++)
    {
        printf("Enter database of week %d:\n", i+1);
        for (j = 0; j < 7; j++)
        {
            printf("Day %d = ",j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    temp = matrix[0][0];
    int count = 0;
    int day =0;
    int week = 0;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 7; j++)
        {
            if(matrix[i][j]>temp)
            {
                temp = matrix[i][j];
                day = j;
                week =i;
            }
        }
    }    
   printf("highest temperature is %d'C and it was reported on day %d in week %d\n", temp, day, week);
}