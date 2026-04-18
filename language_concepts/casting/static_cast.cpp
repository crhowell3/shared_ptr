#include <iostream>

int main() {
  int x = 13;

  auto y = static_cast<double>(x);

  std::cout << "Value of y: " << y << "\n";

  return 0;
}
