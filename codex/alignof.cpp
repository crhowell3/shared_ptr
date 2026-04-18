#include <iostream>

int main() {
  std::cout << "Alignment of a double in bytes: "
            << alignof(double) << std::endl;
  return 0;
}
