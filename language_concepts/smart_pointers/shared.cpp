// shared.cpp

#include <cstdint>
#include <iostream>
#include <memory>

int main() {
  std::shared_ptr<uint64_t> ptr(new uint64_t(10));
  std::shared_ptr<uint64_t> ptr2 = ptr;

  std::cout << "Value at first pointer (" << ptr.get() << "): " << *ptr << std::endl;
  std::cout << "Value at second pointer (" << ptr2.get() << "): " << *ptr2 << std::endl;
  
  std::cout << "Reference count: " << ptr.use_count() << std::endl;

  {
    std::shared_ptr<uint64_t> ptr3 = ptr;
    std::cout << "Reference count: " << ptr.use_count() << std::endl;
  }

  std::cout << "Reference count: " << ptr.use_count() << std::endl;
    
  return 0;
}
