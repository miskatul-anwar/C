#include "stdio.h"
#include "stdlib.h"
#define days 30
#define hours 24
int main(void) {
  float temp_readings[days][hours];
  float sum = 0;
  float average = 0.0;
  for (int i = 0; i < days; i++) {
    for (int j = 0; j < hours; j++) {
      sum += temp_readings[i][j];
    }
  }
  average = sum / days;
  printf("average = %lf\n", average);
}
