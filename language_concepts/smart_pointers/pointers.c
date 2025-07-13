// pointers.c

#include <stdio.h>

int main() {
  int x = 5;

  int* ptr = &x;

  printf("%p", ptr);

  return 0;
}
