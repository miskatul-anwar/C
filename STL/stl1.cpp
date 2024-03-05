#include "cstdlib"
#include "iostream"
int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 0; i < n; i++) {
    std::cout << "hello world!" << std::endl;
  }
  return 0;
}
