#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "~/CS/C/miskat.h"
using namespace std;
INT initiate(void) BEGIN

    int *str = (int *)malloc(10 * sizeof(int));
int i = 0;
for (;;) {
  if (i < 10) {
    *(str + i) = i;
    cout << *(str + i);
  } else {
    break;
  }
  i++;
}
return 0;
END
