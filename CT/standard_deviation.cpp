#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  double standard_deviation(vector<double> dataset1, vector<double> dataset2) {
    vector<double> diff;
    double sum = 0, answer = 0;
    for (int i = 0; i < dataset1.size(); i++) {
      diff.push_back(dataset1[i] - dataset2[i]);
      sum += (dataset1[i] - dataset2[i]);
    }
    sum /= dataset1.size();
    for (auto &it : diff) {
      it -= sum;
      it *= it;
      answer += it;
    }
    return answer;
  }
};

int main(void) {
  vector<double> dataset1, dataset2;
  dataset1 = {22, 18, 17, 19, 22, 12, 14, 11, 19, 7},
  dataset2 = {19, 11, 14, 17, 23, 11, 15, 19, 11, 8};
  Solution s;
  cout << s.standard_deviation(dataset1, dataset2) << endl;
  return 0;
}
