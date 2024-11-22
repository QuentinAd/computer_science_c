#include <iostream>

int add(int a, int b);
int subtract(int a, int b);

int main(void) {
  std::cout << "Hello, World!" << std::endl;
  std::cout << "1 + 1 = " << add(1, 1) << std::endl;
  std::cout << "1 - 1 = " << subtract(1, 1) << std::endl;
  return 0;
}