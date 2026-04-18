#include <bit>
#include <cstdint>
#include <iostream>

constexpr double fp = 1337.67;
constexpr auto u64 = std::bit_cast<std::uint64_t>(fp);

int main() {

  std::cout << "Original floating point value: " << fp
            << ", converted to an integer representation: " << u64 << std::endl;

  return 0;
}
