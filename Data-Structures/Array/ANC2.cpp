#include <stdio.h>
#define N 5

int main() {
    int data[N], loc1, loc2;
    int first, second;
    int temp;
    printf("Enter data accordingly:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &data[i]);
    }

    loc1 = 1;
    loc2 = 2;
    first = data[loc1];
    second = data[loc2];

    if (first < second) {
        temp = first;
        first = second;
        second = temp;
        loc1 = 2;
        loc2 = 1;
    }

    for (int k = 3; k < N; k++) {
        if (first < second) {
            second = first;
            first = data[k];
            loc2 = loc1;
            loc1 = k;
        } else if (second < data[k]) {
            second = data[k];
            loc2 = k;
        }
    }
    printf("data[%d] = %d\n", loc1, first);
    printf("data[%d] = %d\n", loc2, second);
    return 0;
}

