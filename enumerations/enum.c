#include "stdio.h"
enum Weekday { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
int main(int argc, char **argv) {
  enum Weekday today = SUNDAY;
  printf("today is %d\n", today + 1);
  return 0;
}
