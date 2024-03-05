#include "miskat.h"

INT initiate(void)

    BEGIN int rows,
    space, star;

printf("Enter the number of rows for the pyramid: ");
scanf("%d", &rows);

for (int i = 1; i <= rows; i++)
  BEGIN
// Print spaces
for (space = 1; space <= rows - i; space++)
  BEGIN
printf(" ");
END

    // Print stars
    for (star = 1; star <= 2 * i - 1; star++) BEGIN printf("*");
END

    printf("\n");
END

    EXIT;
END
