#include<stdio.h>
#define N 5
int main()
{
    int data[N];
    printf("Enter how many arguments you want?\n");
    for(int i=0;i<=N-1; i++)
    {
        printf("data[%d] = ",i);
        scanf("%d", &data[i]);
    }
    for(int j=N-1; j>=0; j--)
    {
       printf("%d\n", data[j]);
    }
}