#include <bits/stdc++.h>
using namespace std;

class Functions {
public:
  bool removeDuplicates(string &str) {
    map<char, int> m;
    for (auto it : str) {
      m[it]++;
    }
    str.clear();
    for (auto it : m) {
      if (it.second == 1) {
        str += it.first;
      }
    }
    return str != "\0";
  }
};

int main(void) {
  Functions f;
  string input;
  getline(cin, input);
  f.removeDuplicates(input) ? cout << input << endl
                            : cout << "Empty String" << endl;
  return 0;
}
