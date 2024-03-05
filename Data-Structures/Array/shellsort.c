#include <stdio.h>

#define n 8

int main() 
{
    int a[8] = {2, 4, 1, 6, 3, 8, 5, 7};
    int temp;
    for (int gap = n / 2; gap > 0; gap = gap / 2) 
    {
        for (int i = gap; i < n; i++) 
        {
            temp = a[i];
            int j;
            for (j = i; j >= gap && a[j - gap] > temp; j = j - gap) 
            {
                a[j] = a[j - gap];
            }
            a[j] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
