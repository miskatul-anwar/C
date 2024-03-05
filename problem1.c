#include <stdio.h>
#define N 6
int main()
{
    int array[N] = {4, 7, 2, 8, 10, 5};
    int i, max, min;
    min = array[0];
    max = array[0];
    for(i=1; i <N; i++)
    {
        if(array[i]>max)
        {
            max =array[i];
        }
        if(array[i]<min)
        {
            min = array[i];
        }
    }
    printf("max = %d\n", max);
    printf("min = %d\n", min);

}