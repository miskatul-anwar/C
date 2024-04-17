#include "stdio.h"
#define days 30
#define hours 24
int main(void) {
  float temp_readings[days][hours], sum = 0, average = 0;
  for (int i = 0; i < days; i++) {
    for (int j = 0; j < hours; j++) {
      sum += temp_readings[i][j];
    }
  }
  average = sum / days;
  printf("average = %lf\n", average);
  return 0;
}
