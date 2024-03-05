#include <math.h>
#include <stdio.h>

int main() {
    int ar[100], n, i, temp, square[100];
    float sum = 0;
    printf("Enter how many variables you want: ");
    scanf("%d", &n);
    printf("Now, enter the values accordingly.\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++) {
        printf("argument[%d] = %d\n", i, ar[i]);
        sum = sum + ar[i];
    }
    printf("Sum = %f\n", sum);
    printf("Average = %f\n", sum / n);

    float mean = sum / n;
    float dsum = 0;

    for (i = 0; i < n; i++) {
        temp = mean - ar[i];
        square[i] = temp * temp;
        dsum = dsum + square[i];
    }
    printf("Dsum = %f\n", dsum);
    float dmean = dsum / n;
    printf("Variance = %f\n", dmean);

    float s = sqrt(dmean);
    printf("Standard deviation = %f\n", s);
    return 0;
}
