#include <stdio.h>
#include <unistd.h>

// Function to display a digit on the simulated seven-segment display
void displayDigit(int digit) {
    switch (digit) {
        case 0:
            printf(" _ \n| |\n|_|\n");
            break;
        case 1:
            printf("  \n/ |\n  |\n");
            break;
        case 2:
            printf(" _ \n _|\n|_ \n");
            break;
        case 3:
            printf(" _ \n _|\n _|\n");
            break;
        case 4:
            printf("   \n|_|\n  |\n");
            break;
        case 5:
            printf(" _ \n|_ \n _|\n");
            break;
        case 6:
            printf(" _ \n|_ \n|_|\n");
            break;
        case 7:
            printf(" _ \n  |\n  |\n");
            break;
        case 8:
            printf(" _ \n|_|\n|_|\n");
            break;
        case 9:
            printf(" _ \n|_|\n _|\n");
            break;
        default:
            printf("Invalid digit\n");
            break;
    }
}

// Function to perform basic arithmetic operations
int calculate(int num1, char operator, int num2) {
    int result = 0;

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return result;
}

int main() {
    int num1, num2, result;
    char operator;

    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform calculation
    result = calculate(num1, operator, num2);

    // Display result using the simulated seven-segment display
    printf("\nResult: %d\n", result);
    displayDigit(result);

    // Add a delay to observe the displayed result (you may need to adjust the delay based on your requirements)
    sleep(5);

    return 0;
}

