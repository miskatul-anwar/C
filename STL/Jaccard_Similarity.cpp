#include "bits/stdc++.h"
using namespace std;
int main(void) {
  string doc_1 = "Data is the new oil of digital economy",
         doc_2 = "Data is a new oil";
  string eachword1, eachword2;
  list<string> l1, l2, tmp1, tmp2;
  stringstream s1(doc_1), s2(doc_2);
  while (s1 >> eachword1) {
    l1.push_back(eachword1);
  }
  while (s2 >> eachword2) {
    l2.push_back(eachword2);
  }
  cout << "Original list 1: ";
  for (auto x : l1) {
    tmp1.push_back(x);
    cout << x << " ";
  }
  cout << endl;
  cout << "Original list 2: ";
  for (auto x : l2) {
    tmp2.push_back(x);
    cout << x << " ";
  }
  cout << endl;

  // union of the lists
  l1.merge(l2);
  l1.sort();
  l1.unique();
  int b = l1.size();

  // intersection of the lists
  int count = 0;
  tmp1.sort(), tmp2.sort();
  for (auto x : tmp1) {
    for (auto y : tmp2) {
      if (x == y) {
        count++;
      }
    }
  }
  int a = count;
  // The Jaccard similarity of these two documents is estimated as follows
  float jaccard = (float)a / b;
  cout << "Jaccard similarity: " << jaccard << endl;
  return 0;
}
