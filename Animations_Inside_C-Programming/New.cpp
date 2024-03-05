#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(void) {
  char *x = (char*)malloc(6 * sizeof(char));

  if (x == NULL) {
    // handle memory allocation error
    return 1;
  } else {
    fgets(x, 6, stdin);
  }
  for(int i=0;i<strlen(x);i++){
    int temp=x[i];
    x[i]=x[i+1];
    x[i+1]=temp;
  }
  puts(x);
  free(x);
  return 0;
}

