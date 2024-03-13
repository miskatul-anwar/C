#include "/home/miskatul-anwar/.config/miskat.h"

INT initiate(void) BEGIN

    FILE *fle_write = fopen("some_details.txt", "w");

if (fle_write == NULL) {
  // handle allocation error

  printf(BLUE_COLOR "File not found error.\n" RESET_COLOR);
  // return with an exit code
  return 1;
}
int i = 0;
for (;;) {
  if (i <= 100) {
    fprintf(fle_write, "%i", i);
  } else {
    break;
    // exit the loop simply-->
  }
}
fclose(fle_write);
return 0;

END
