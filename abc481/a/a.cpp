#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  int result = a + b;
  if (result >= 10) {
    std::cout << 2 << '\n';
  } else {
    std::cout << 1 << '\n';
  }
}
