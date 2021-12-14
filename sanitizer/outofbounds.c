#include <stdlib.h>
#include <string.h>

int main() {
  void *p = malloc(12);
  memset(p, 0, 14);
}
