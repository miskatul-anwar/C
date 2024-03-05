#include <stdio.h>
#include <stdlib.h>
#define MIN(a,b) (a<b? a : b)
#define inc(x) ~x
#define area(x,y) x*y
#define max(a,b) (a>b? a : b)
#define output(x) printf("I love %s\n", x);

int main(void){
  int a=4, b=5;
  printf("%d\n",MIN(a,b));
  printf("%d\n", inc(5));
  printf("%d\n", area(a,b));
  printf("%d\n", max(a,b));
  char x[10] = "myself";
  output(x);
  return 0;
}
