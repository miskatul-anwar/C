#include <stdio.h>

int main() {
    int data[5] = {1, 2, 3, 4, 5};
    int item;
    printf("item:");
    scanf("%d", &item);
    int lb = 0, ub = 4, loc;
    int beg = lb;
    int end = ub;
    int mid = ((beg + end) / 2);
    while (beg <= end && data[mid] != item) {
        if (item < data[mid]) {
            end = mid - 1;
        } else {
            beg = mid + 1;
        }
        mid = ((beg + end) / 2);
    }
    if (data[mid] == item) {
        loc = mid;
        printf("the value: %d\n", data[loc]);
    } else {
        loc = 0;
        printf("the value doesn't exist.\n");
    }
    return 0;
}
