#include<stdio.h>

int main() {
    int sum = 0, i, n, x = 0, y = 1; 
    printf("Enter the number of terms in the Fibonacci series: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("%d ", x); 
        sum += x;
        int temp = y;
        y = x + y;
        x = temp;
    }

    printf("\nThe sum of the Fibonacci series is: %d\n", sum);

    return 0;
}
