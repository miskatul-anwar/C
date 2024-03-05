#include<stdio.h>
#define N 5
int main()
{
    int ar1[N]={1,2,3,4,5};
    int ar2[N]={6,7,8,9,10};
    int temp;
    for(int i=0; i<N; i++)
    {
        temp =ar1[i];
          ar1[i] = ar2[i];
        ar2[i] = temp;
      
    }
     for (int j = 0; j < N; j++) 
    {
        printf("%d ", ar1[j]);
    }
    printf("\n");
    
    for (int j = 0; j < N; j++) 
    {
        printf("%d ", ar2[j]);
    }
}