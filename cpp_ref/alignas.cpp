// alignas.cpp

#include <cstdio>

int main() {
  char item1 = 0b1001;
  char item2 = 0b0111;

  item1 and_eq item2;
  printf("%#06b\n", item1);
  
  return 0;
}
