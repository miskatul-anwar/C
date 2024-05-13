#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define get_float(text_to_prompt)                                              \
  ({                                                                           \
    float input;                                                               \
    cout << text_to_prompt;                                                    \
    input;                                                                     \
  })
#define for_loop(n)                                                            \
  (for (int i = 0; i < n; i++) { std::cout << i << std::endl; })

#define get_string(text_to_prompt)                                             \
  ({                                                                           \
    std::string input;                                                         \
    cout << text_to_prompt;                                                    \
    std::cin >> input;                                                         \
    input;                                                                     \
  })

#define FIB_MACRO(n) ((n <= 1) ? n : FIB_MACRO(n - 1) + FIB_MACRO(n - 2))

int main(void) {
  int x = 5;
  cout << FIB_MACRO(x) << endl;
  return 0;
}
