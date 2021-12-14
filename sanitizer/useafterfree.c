#include <stdlib.h>
#include <string.h>

int main() {
  void *p = malloc(12);
  free(p);
  memset(p, 0, 12);
}
