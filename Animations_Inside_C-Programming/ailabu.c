#include "/home/miskatul-anwar/.config/miskat.h"

INT initiate(void) BEGIN

int i = 1;
for(;;){
  if(i<100){
    printf(BLUE_COLOR " I Love YOU! " RESET_COLOR);
    fflush(stdout);
    usleep(1000000);
  }else{
    break;
  }
}
return 0;


END


