#include "stdio.h"
int average(int a[], int n) {

  int i = 0, average = 0;

  while (i++ < n)
    average += a[i];
  average /= n;
  return average;
}
int max_in_array(int a[], int n) {

  int i = 1, max = a[0];
  while (i++ < n) {
    if (a[i] > max)
      max = a[i];
  }
  return max;
}
int positives(int a[], int n) {

  int total, i = 0;

  while (i++ < n) {
    if (a[n] > 0)
      total++;
  }

  return total;
}
int main(int argc, char **argv) {
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("%d\n", average(array, 10));
  printf("%d\n", max_in_array(array, 10));
  printf("%d\n", positives(array, 10));
  return 0;
}
