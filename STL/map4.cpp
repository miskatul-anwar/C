#include <bits/stdc++.h>
using namespace std;
int main(void) {
  map<string, int> input;
  string s = "learning to code is learning to create and innovate", each;
  stringstream ss(s);
  int i = 1;
  while (ss >> each) {
    input.find(each) == input.end() ? input[each] = i : input[each]++;
  }

  for (auto st : input) {
    cout << st.first << " " << st.second << endl;
  }
}
