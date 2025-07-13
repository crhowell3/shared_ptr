// weak.cpp

#include <cstdint>
#include <iostream>
#include <memory>

std::weak_ptr<uint64_t> weak;

void CheckPointer() {
  std::cout << "Reference count: " << weak.use_count() << std::endl;
  if (std::shared_ptr<uint64_t> shared_copy = weak.lock()) {
    std::cout << "Value of weak pointer is "
              << *shared_copy << std::endl;
  } else {
    std::cout << "weak pointer is expired" << std::endl;
  }
}

int main() {
  {
    auto shared = std::make_shared<uint64_t>(10);
    weak = shared;
    CheckPointer();
  }

  auto val = *weak;
  
  CheckPointer();

  return 0;
}
