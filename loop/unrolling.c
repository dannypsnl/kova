#include <stdio.h>
#include <time.h>

#define N 100000000

int f(int i) { return i * i; }

int main() {
  clock_t start, end;
  double cpu_time_used;

  start = clock();
  for (int i = 0; i < N; i++) {
    f(i);
  }
  end = clock();
  printf("Time measured: %.3f seconds.\n",
         ((double)(end - start)) / CLOCKS_PER_SEC);

  start = clock();
  for (int i = 0; i < N; i += 2) {
    f(i);
    f(i + 1);
  }
  end = clock();
  printf("Time measured: %.3f seconds.\n",
         ((double)(end - start)) / CLOCKS_PER_SEC);

  start = clock();
  for (int i = 0; i < N; i += 4) {
    f(i);
    f(i + 1);
    f(i + 2);
    f(i + 3);
  }
  end = clock();
  printf("Time measured: %.3f seconds.\n",
         ((double)(end - start)) / CLOCKS_PER_SEC);
}
