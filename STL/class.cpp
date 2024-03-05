#include "iostream"
#include "string"
// scope resolution operator 😯 🤞
using namespace std;
int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  string hello = "Hello";
  string world = "world";
  string message = hello + " " + world;
  message[0] = 'h';
  for (int i = 0; i < n; i++) {
    cout << message << endl;
  }
  return 0;
}
