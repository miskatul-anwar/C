#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
int sharedData = 0;

void incrementData() {
  for (int i = 0; i < 1000; ++i) {
    mtx.lock(); // Lock the mutex
    sharedData++;
    mtx.unlock(); // Unlock the mutex
  }
}

int main() {
  std::thread t1(incrementData);
  std::thread t2(incrementData);
  t1.join();
  t2.join();
  std::cout << "Shared data value: " << sharedData << std::endl;
  return 0;
}
