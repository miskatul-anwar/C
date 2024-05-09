#include <bits/stdc++.h>
#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

using namespace std;

bool is_prime(int number);
int largest_prime(vector<int> &v);
int median_composite(vector<int> &v);

int main() {
  fast;
  vector<int> v(6);
  for (int i = 0; i < 6; i++) {
    cin >> v[i];
  }
  int prime = largest_prime(v);
  int composite = median_composite(v);
  cout << abs(largest_prime(v) - median_composite(v)) << endl;
  return 0;
}

bool is_prime(int number) {
  if (number <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(number); i++) {
    if (number % i == 0) {
      return false;
    }
  }
  return true;
}

int largest_prime(vector<int> &v) {
  vector<int> tmp;
  for (auto it : v) {
    if (is_prime(it)) {
      tmp.push_back(it);
    }
  }
  if (tmp.empty())
    return 0; // Return 0 if no prime found
  sort(tmp.begin(), tmp.end());
  return tmp.back();
}

int median_composite(vector<int> &v) {
  vector<int> tmp;
  for (auto it : v) {
    if (!is_prime(it)) {
      tmp.push_back(it);
    }
  }
  if (tmp.empty())
    return 0; // Return 0 if no composite found
  sort(tmp.begin(), tmp.end());
  int n = tmp.size();
  if (n % 2 == 0) {
    return (tmp[n / 2 - 1] + tmp[n / 2]) / 2;
  } else {
    return tmp[n / 2];
  }
}
