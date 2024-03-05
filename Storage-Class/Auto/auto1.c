#include "stdio.h"
void fun() {
  auto int a = 10;
  ++a;
  printf("%d\n", a);
}
void main() {
  fun();
  fun();
  fun();
  return;
}
