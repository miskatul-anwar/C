#include<stdio.h>
int bubble(int data[10],int n);
int main()
{
    int data[5] = {6, 2, 10, 4, 5};
    int newdata[5];
    int n;
    scanf("%d",&n);
    newdata[5]= bubble(data, n);
}
int bubble(int data[10],int n)
{
    for (int k = 0; k < n ; k++) 
    {
        for (int ptr = 0; ptr <= n - 2; ptr++) 
        {
            if (data[ptr] > data[ptr + 1]) 
            {
                int temp = data[ptr];
                data[ptr] = data[ptr + 1];
                data[ptr + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return data[5];
}