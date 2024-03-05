#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int row=10; row>=1; row--)
    {
    for (int col=1; col<=row; col++)
    {
    printf("*");
    }
    printf("\n");
    }
    return 0;
}
