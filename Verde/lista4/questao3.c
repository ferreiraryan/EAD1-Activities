#include <stdio.h>

long long soma(int n) {
  if (n <= 0)
    return 0;
  return n + soma(n - 1);
}

int main() {
  int n;
  if (scanf("%d", &n) != 1 || n < 0)
    return 1;
  printf("%lld\n", soma(n));
  return 0;
}
