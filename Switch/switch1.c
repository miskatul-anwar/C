#include <stdio.h>

int main(void) {
    int num, num_passing = 0, total_grades = 0;
    scanf("%d", &num);

    switch (num) {
        case 4:
        case 3:
        case 2:
        case 1:
            ++num_passing;
            break; // Add break statement after each case

        case 0:
            ++total_grades;
            break; // Add break statement after case 0
    }

    printf("%d\n", num_passing);
    printf("%d\n", total_grades);

    return 0;
}
