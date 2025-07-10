// main.cpp

#include <iostream>
#include "firewall.hpp"

int main() {
  Firewall f1;
  f1.SetData(100);

  Firewall f2 = f1;
  Firewall f3;
  f3 = f2;

  Firewall f4 = std::move(f1);
  Firewall f5;
  f5 = std::move(f3);

  std::cout << "f2: " << f2.GetData() << std::endl;
  std::cout << "f4: " << f4.GetData() << std::endl;

  return 0;
}
