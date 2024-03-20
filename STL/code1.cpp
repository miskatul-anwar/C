#include "iostream"
using namespace std;
int main(int argc, char **argv) {
  pair<int, int> p = {1, 2};
  pair<int, pair<int, int>> q = {1, {2, 3}};
  cout << q.first << " " << q.second.first << " " << q.second.second << endl;
  cout << p.first << " " << p.second << endl;
}
