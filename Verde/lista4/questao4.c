#include <stdio.h>

long long potencia(int a, int b) {
  if (b == 0)
    return 1;
  return a * potencia(a, b - 1);
}

int main() {
  int a, b;
  if (scanf("%d %d", &a, &b) != 2 || b < 0)
    return 1;
  printf("%lld\n", potencia(a, b));
  return 0;
}
