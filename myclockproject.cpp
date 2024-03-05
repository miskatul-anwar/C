#include <stdio.h>
#include<unistd.h>
#include "iostream"
int main()
{
    int hours, minutes, seconds;
    printf("\n================================================\n");
    printf("Set the current time:\n");
    printf("hours = ");
    scanf("%d", &hours);
    printf("minutes = ");
    scanf("%d", &minutes);
    printf("\n");
    printf("\n================================================\n");

printf("\nIt's a 24hr clock\n");
while(1)
{
    for(int i = hours; i <=23; i++)
    {
        for(int j = minutes; j <=59; j++)
        {
            for(int k = 0; k <=59; k++)
            {
                printf("\r %02d:%02d:%02d" , i , j , k);
                fflush(stdout);
                usleep (1000000);
            }
            minutes = 0;
        }
        hours = 0;
    }
}
}
