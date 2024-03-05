#include <stdio.h>
#define N 5

int main() 
{
    int data[N] = {1, 2, 3, 4, 5};
    for (int k = 0; k < N ; k++) 
    {
        for (int ptr = 0; ptr <= N - 2; ptr++) 
        {
            if (data[ptr] > data[ptr + 1]) 
            {
                int temp = data[ptr];
                data[ptr] = data[ptr + 1];
                data[ptr + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
