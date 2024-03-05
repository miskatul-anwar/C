#include<stdio.h>
#define N 5
int main()
{
    int ar1[N] = {1, 2, 3, 4, 5};
    int ar2[N];
    for(int m=0; m<N; m++)
    {
        printf("normal : %d", ar1[m]);
    }
    for(int i=N; i>=0; i--)
    {
        for(int j=0; j<N; j++)
        {
            ar2[j] == ar1[i];
        }
    }
    for(int k; k<N; k++)
    {
        printf("reversed: %d", ar2[k]);
    }
}