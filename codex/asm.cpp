int main() {
  asm(
    "movl $10, %eax;"
    "movl $20, %ebx;"
    "addl %ebx, %eax;"
  );
  return 0;
}
