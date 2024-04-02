#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int n, i, j;
  cin >> n;
  FILE *f = fopen("square.txt", "w");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      fprintf(f, "* ");
    }
    fprintf(f, "\n");
  }
  fclose(f);
  return 0;
}
