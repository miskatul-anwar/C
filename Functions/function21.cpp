#include <stdio.h>
void printSquareRecursive(int size, int row, int col);
int main() 
{
    int size, height;

    printf("Enter the size of the square: ");
    scanf("%d", &size);
    printf("Square of size %d:\n", size);
    printSquareRecursive(size, 0, 0); 
    printf("\n");
    return 0;
}
void printSquareRecursive(int size, int row, int col) 
{
    if (row == size) 
    {
        return; 
    }

    if (col == size) 
    {
        printf("\n"); 
        printSquareRecursive(size, row + 1, 0); 
        return;
    }
    printf("* ");
    printSquareRecursive(size, row, col + 1); 
}