#include <stdio.h>

unsigned long long fatorial(int n) {
  if (n <= 1)
    return 1;
  return n * fatorial(n - 1);
}

int main() {
  int num;
  if (scanf("%d", &num) != 1 || num < 0)
    return 1;
  printf("%llu\n", fatorial(num));
  return 0;
}
