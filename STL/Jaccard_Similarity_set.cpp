#include "bits/stdc++.h"
#include <iterator>
#include <string>
using namespace std;
int main(void) {
  string doc_1 = "Data is the new oil of digital economy",
         doc_2 = "Data is a new oil";
  string eachword1, eachword2;
  set<string> l1, l2, tmp1, tmp2;
  stringstream s1(doc_1), s2(doc_2);
  while (s1 >> eachword1) {
    l1.insert(eachword1);
  }
  while (s2 >> eachword2) {
    l2.insert(eachword2);
  }
  cout << "Original list 1: ";
  for (auto x : l1) {
    tmp1.insert(x);
    cout << x << " ";
  }
  cout << endl;
  cout << "Original list 2: ";
  for (auto x : l2) {
    tmp2.insert(x);
    cout << x << " ";
  }
  cout << endl;

  // union of the sets
  l1.merge(l2);
  // intersection
  set<string> common;
  // tmp1.insert(tmp2.begin(), tmp2.end());
  set_intersection(tmp1.begin(), tmp1.end(), tmp2.begin(), tmp2.end(),
                   inserter(common, common.begin()));
  int a = common.size();
  int b = l1.size();
  // The Jaccard similarity of these two documents is estimated as follows
  float jaccard = (float)a / b;
  cout << "Jaccard similarity: " << jaccard << endl;
  return 0;
}
