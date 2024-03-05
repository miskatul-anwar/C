#include "stdio.h"
int main(void) {
  auto const float n = 5.3456112;
  printf("n = %f\n", n);
  printf("n = %.4g\n", n);
  printf("n = %.4f\n", n);
  printf("n = %.4e\n", n);
  printf("n = %.4E\n", n);
  printf("n = %#12.4f\n", n);
  printf("n = %#12.4g\n", n);
  printf("n = %-12.4f\n", n);
  printf("n = %+12.4f\n", n);
  auto const char *s = "Hello, World!";
  printf("s = %s\n", s);
  printf("s = %.*s\n", 5, s);
}
