#include<stdio.h>
int shape(int x);
int main()
{
    shape(12);
}
int shape(int x)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
