#include <bits/stdc++.h>
using namespace std;
int main(void) {
  map<int, double> m = {
      {100, 348.17}, {300, 27.19}, {500, 0.00}, {700, -14.22}};
  FILE *f = fopen("oldmast.txt", "w");
  for (auto i = m.begin(); i != m.end(); i++) {
    fprintf(f, "\n%d %lf\n", i->first, i->second);
  }
  map<int, double> n = {{100, 27.14}, {300, 62.11}, {300, 83.89}, {400, 100.56},
                        {700, 80.78}, {700, 1.53},  {900, 82.17}};
  fclose(f);

  FILE *x = fopen("trans.txt", "w");
  for (auto i = n.begin(); i != n.end(); i++) {
    fprintf(x, "\n%d %lf\n", i->first, i->second);
  }
  fclose(x);

  FILE *y = fopen("oldmast.txt", "r");
  string each;
  char line;
  while ((getline(cin, y))) {
    cout << line << " ";
  }
  return 0;
}
