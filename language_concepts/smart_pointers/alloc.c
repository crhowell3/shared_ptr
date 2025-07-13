// alloc.c

#include <stdio.h>
#include <stdlib.h>

int main() {
  int* ptr = (int*)malloc(sizeof(int));
  printf("Allocated memory for an integer\n");

  free(ptr);
  printf("Freed the allocated memory");

  ptr = NULL;

  return 0;
}
