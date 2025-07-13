// unique.cpp

#include <cstdint>
#include <iostream>
#include <memory>

struct CustomDeleter {
  void operator()(uint64_t* i) {
    std::cout << "Custom deleter called; pointer fell out of scope"
              << std::endl;
    delete i;
  }
};

int main() {
  // Standard use of unique ptr
  auto ptr = std::make_unique<uint64_t>(10);
  std::cout << "Value at " << ptr.get() << ": " << *ptr << std::endl;

  // Demonstration for destruction after falling out of scope
  {
    using custom_ptr_t = std::unique_ptr<uint64_t, CustomDeleter>;
    custom_ptr_t ptr_with_deleter(new uint64_t(10));
  }

  std::cout << "Terminating";

  return 0;
}
