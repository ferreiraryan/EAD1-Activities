#include <stdio.h>

double fatorial(int n) {
  if (n <= 1)
    return 1.0;
  return n * fatorial(n - 1);
}

double serie(int n) {
  if (n <= 0)
    return 0.0;
  if (n == 1)
    return 1.0;
  return (1.0 / fatorial(n)) + serie(n - 1);
}

int main() {
  int n;
  if (scanf("%d", &n) != 1 || n <= 0)
    return 1;
  printf("%.2lf\n", serie(n));
  return 0;
}
