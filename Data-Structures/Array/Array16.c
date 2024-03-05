#include<stdio.h>
#define N 4
int main()
{
    int array[N] = {1, 3, 5, 6};

    int target;
    printf("target = ");
    scanf("%d", &target);
    for(int i=0; i<N; i++)
    {
        if(target == array[i])
        {
            printf("index = %d\n", i);
            break;
        }
        else
        {
            printf("Sorry\n");
        }
    }
}