#include "bits/stdc++.h"
using namespace std;
int main(void) {
  FILE *file = fopen("1.txt", "w");
  vector<int> n = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int count = 1001001;
  fprintf(file, "|     USER     |     ID     |\n");
  for (auto i : n) {
    n.push_back(i);
    fprintf(file, "|%14d|%12d|\n", i, count++);
  }
  fclose(file);
}
