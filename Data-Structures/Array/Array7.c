#include<stdio.h>
int main()
{
    int ar[5], n , i, value;
    printf("How many values you need?\n");
    scanf("%d", &n);
    printf("Store %d numbers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Which number you need to search?\n");
    scanf("%d", &value);
    for (int j = 0; j <=value; j++)
    {
        if(j == value)
        {
            printf("For ar[%d] or %d no. : value stored %d\n", j,j-1, ar[j]);
            break;
        }
        else if(j>n)
        {
            printf("No value was stored for the argument.\n");
            break;
        }   
    }
    return 0;
    
}