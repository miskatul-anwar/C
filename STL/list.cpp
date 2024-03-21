#include "iostream"
#include <list>
#include <ostream>
using namespace std;
int main(int argc, char **argv) {
  // create a list
  list<int> numbers = {1, 2, 3, 4, 5, 6};
  // display the original list
  for (int number : numbers) {
    cout << number;
  }
  cout << endl;
  // add elements at the beginning
  numbers.push_front(0);
  numbers.push_back(4);
  cout << "final list" << endl;
  for (int number : numbers) {
    cout << number;
  }
  cout << endl;
  numbers.reverse();
  for (int number : numbers) {
    cout << number;
  }
  numbers.sort();
  cout << endl;
  numbers.unique();
  for (int number : numbers) {
    cout << number;
  }
  cout << endl;
  list<int> numbers2 = {4, 12, 3, 43, 56};
  numbers.merge(numbers2);
  for (int number : numbers) {
    cout << number;
  }
  return 0;
}
