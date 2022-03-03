#include <stdio.h>
#include <time.h>

#define N 100000000

int f(int i) { return i * i; }

int main() {
  clock_t start, end;
  double cpu_time_used;
  int sum;

  start = clock();
  sum = 0;
  for (int i = 0; i < N; i++) {
    sum += f(i);
  }
  end = clock();
  printf("Time measured: %.3f seconds. Sum: %d\n",
         ((double)(end - start)) / CLOCKS_PER_SEC, sum);

  start = clock();
  sum = 0;
  for (int i = 0; i < N; i += 2) {
    sum += f(i);
    sum += f(i + 1);
  }
  end = clock();
  printf("Time measured: %.3f seconds. Sum: %d\n",
         ((double)(end - start)) / CLOCKS_PER_SEC, sum);

  start = clock();
  sum = 0;
  for (int i = 0; i < N; i += 4) {
    sum += f(i);
    sum += f(i + 1);
    sum += f(i + 2);
    sum += f(i + 3);
  }
  end = clock();
  printf("Time measured: %.3f seconds. Sum: %d\n",
         ((double)(end - start)) / CLOCKS_PER_SEC, sum);
}
