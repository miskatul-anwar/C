#include <stdio.h>

int main() 
{
    int i, j;
    char *name[] = {"Bahrain", "Kuwait", "UK", "Australia"};
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int data[4][12];

    for (i = 0; i < 4; i++) 
    {
        printf("Enter the temperature of %s = \n", name[i]);
        for (j = 0; j < 12; j++)
        {
            printf("%s = ", month[j]);
            scanf("%d", &data[i][j]);
        }
    }
    int maxb = data[0][0];
    int minb = data[0][0];
    int maxk = data[1][0];
    int mink = data[1][0];
    int maxu = data[2][0];
    int minu = data[2][0];
    int maxa = data[3][0];
    int mina = data[3][0];

    for(int i = 0; i < 1; i++)
    {
        for(j = 0; j < 12; j++)
        {
            if(data[i][j]> maxb)
            {
                maxb = data[i][j];
            }
            if(data[i][j]< minb)
            {
                minb = data[i][j];
            }
        }
    } 
    for(int i = 1; i < 2; i++)
    {
        for(j = 0; j < 12; j++)
        {
            if(data[i][j]> maxk)
            {
                maxk = data[i][j];
            }
            if(data[i][j]< mink)
            {
                mink = data[i][j];
            }
        }
    } 
    for(int i = 2; i < 3; i++)
    {
        for(j = 0; j < 12; j++)
        {
            if(data[i][j]> maxu)
            {
                maxu = data[i][j];
            }
            if(data[i][j]< minu)
            {
                minu = data[i][j];
            }
        }
    }   
     for(int i = 3; i < 4; i++)
    {
        for(j = 0; j < 12; j++)
        {
            if(data[i][j]> maxa)
            {
                maxa = data[i][j];
            }
            if(data[i][j]< mina)
            {
                mina = data[i][j];
            }
        }
        
    }
    printf("\n");
    printf("Country   Highest     Lowset\n");
    printf("Bahrain     %d          %d \n", maxb, minb);
    printf("Kuwait      %d          %d \n", maxk, mink);
    printf("UK          %d          %d \n", maxu, minu);
    printf("Australia   %d          %d \n", maxa, mina);
}
