#include <stdio.h>

enum Months {
  January,
  February,
  March,
  April,
  May,
  June,
  July,
  August,
  September,
  October,
  November,
  December
};

int main() {

  enum Months m = May;

  printf("The Value of May in Months is %d", m);

  return 0;
}
