#include <bits/stdc++.h>
using namespace std;
int main(void) {
  ofstream f("advanced_file.txt");
  int n = 5;
  vector<string> v;
iterate:
  if (n--) {
    string temp;
    cin >> temp;
    v.push_back(temp);
    goto iterate;
  }
  for (auto it : v) {
    f << it << endl;
  }
  f.close();
  string temp;
  ifstream g("advanced_file.txt");
  while (getline(g, temp)) {
    cout << temp << endl;
  }
  return 0;
}
