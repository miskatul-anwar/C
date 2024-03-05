#include<stdio.h>
#define N 5
int main()
{
    int i, num;
    printf("Enter the number:");
    scanf("%d", &num);
    int data[N];
    for(i=0; i<5; i++)
    {
        scanf("%d", &data[i]);
    }
    int sum = 0;
    int count;
    for (i=0;i<N;i++)
    {
        if (data[i] == num)
        {
            sum = sum +i;
            count++;
        }
    }
    if(count > 0)
    {
        printf("Yes, The number %d exists %d times.\n", num, count);
    }
    else
    {
        printf("There is no such number");
    }
}
