// main.cpp
#include <iostream>
#include "singleton.hpp"

int main() {
  auto& singleton = Singleton::Instance();
  singleton.SetValue("Hello World!");
  std::cout << singleton.GetValue() << std::endl;
  return 0;
}
