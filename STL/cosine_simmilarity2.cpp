#include "bits/stdc++.h"
using namespace std;
int main(void) {
  string doc1 = "the best data science course",
         doc2 = "data science is popular", each1, each2;
  vector<string> words1, words2;
  stringstream ss1(doc1), ss2(doc2);
  list<string> l1, l2;
  while (ss1 >> each1)
    words1.push_back(each1);
  while (ss2 >> each2)
    words2.push_back(each2);
  set<string> set1;
  for (int i = 0; i < words1.size(); i++)
    set1.insert(words1[i]);
  for (int i = 0; i < words2.size(); i++)
    set1.insert(words2[i]);
  vector<int> D1(set1.size(), 0), D2(set1.size(), 0);
  for (const string &i : words1) {
    auto it = find(set1.begin(), set1.end(), i);
    if (it != set1.end()) {
      int in = distance(set1.begin(), it);
      D1[in]++;
    }
  }
  for (const string &i : words2) {
    auto it = find(set1.begin(), set1.end(), i);
    if (it != set1.end()) {
      int in = distance(set1.begin(), it);
      D2[in]++;
    }
  }
  int dot_product = inner_product(D1.begin(), D1.end(), D2.begin(), 0);
  double magnitude1 = sqrt(inner_product(D1.begin(), D1.end(), D1.begin(), 0));
  double magnitude2 = sqrt(inner_product(D2.begin(), D2.end(), D2.begin(), 0));
  double cosine = dot_product / (magnitude1 * magnitude2);
  cout << "cosine: " << cosine << endl;
  EXIT_SUCCESS;
}
