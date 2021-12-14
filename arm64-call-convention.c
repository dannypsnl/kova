#include <stdio.h>

long add(long a1, long a2, long a3, long a4, long a5, long a6, long a7, long a8,
         long a9, long a10) {
  printf("%ld\n", a1);
  printf("%ld\n", a2);
  printf("%ld\n", a3);
  printf("%ld\n", a4);
  printf("%ld\n", a5);
  printf("%ld\n", a6);
  printf("%ld\n", a7);
  printf("%ld\n", a8);
  printf("%ld\n", a9);
  printf("%ld\n", a10);
  return a1 + a2;
}

double foo() { return 1.0; }

int main() {
  asm volatile("mov x0, #1");
  asm volatile("mov x1, #2");
  asm volatile("mov x2, #3");
  asm volatile("mov x3, #4");
  asm volatile("mov x4, #5");
  asm volatile("mov x5, #6");
  asm volatile("mov x6, #7");
  asm volatile("mov x7, #8");
  asm volatile("mov x8, #9");
  asm volatile("mov x9, #9");
  asm volatile("str x9, [sp]");
  asm volatile("mov x9, #10");
  asm volatile("str x9, [sp, 8]");
  asm volatile("bl _add");
  long x;
  asm volatile("mov %0, x0" : "=r"(x));
  printf("%ld\n", x);
  asm volatile("bl _foo");
  double y;
  asm volatile("fmov %0, d0" : "=r"(y));
  printf("%f\n", y);
}
