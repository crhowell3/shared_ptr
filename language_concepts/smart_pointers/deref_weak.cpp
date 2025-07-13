// deref_weak.cpp

#include <cstdint>
#include <memory>

int main() {
  auto shared = std::make_shared<uint64_t>(10);
  std::weak_ptr<uint64_t> weak = shared;
  auto val = *weak;  // Will not compile

  return 0;
}
