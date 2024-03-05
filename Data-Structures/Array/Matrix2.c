#include<stdio.h>
int main()
{
     int first[2][2];
     int i, j;
    printf("Enter numbers accordingly:\n");
    for(int i=0; i <2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("first[%d][%d] = ", i, j);
            scanf("%d", &first[i][j]);
        }
    } 
    for ( i = 0; i < 2; i++)
    {
        for(j =0; j<2; j++)
        {
            printf(" %d ", first[j][i]);
        }
        printf("\n");
    }
    
}