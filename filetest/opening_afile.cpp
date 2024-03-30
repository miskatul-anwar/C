#include <bits/stdc++.h>
using namespace std;
int main(void) {
  FILE *f = fopen("datasheet.txt", "w");
  if (f == NULL) {
    cout << "File unkown" << endl;
    return EXIT_FAILURE;
  }
  fclose(f);
  return EXIT_SUCCESS;
}
