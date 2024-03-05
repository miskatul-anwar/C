#include <stdio.h>

int main() {
    int i, j;
    char *name[] = {"Bahrain", "Kuwait", "UK", "Australia"};
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int data[4][12];

    for (i = 0; i < 4; i++) {
        printf("Enter the temperature of %s:\n", name[i]);
        for (j = 0; j < 12; j++) {
            printf("%s: ", month[j]);
            scanf("%d", &data[i][j]);
        }
    }

    int max[4] = {data[0][0], data[1][0], data[2][0], data[3][0]};
    int min[4] = {data[0][0], data[1][0], data[2][0], data[3][0]};

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 12; j++) {
            if (data[i][j] > max[i]) {
                max[i] = data[i][j];
            }
            if (data[i][j] < min[i]) {
                min[i] = data[i][j];
            }
        }
    }

    printf("\n");
    printf("Country   Highest     Lowest\n");

    for (i = 0; i < 4; i++) {
        printf("%-10s %6d %10d\n", name[i], max[i], min[i]);
    }

    return 0;
}
