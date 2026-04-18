// dynamic_cast.cpp

#include <iostream>

class Base {
public:
  virtual void check() { std::cout << "This object is of type Base\n"; }
};

class Derived : public Base {
public:
  void check() override { std::cout << "This object is of type Derived\n"; }
};

int main() {
  Derived derived;

  Base *base = &derived;

  auto *new_derived = dynamic_cast<Derived *>(base);

  // Always check if downcast was successful to prevent segfaults
  if (new_derived == nullptr) {
    std::cerr << "Downcast failed.\n";
    return 1;
  } else {
    new_derived->check();
  }

  return 0;
}
