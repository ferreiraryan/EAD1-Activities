#include <stdio.h>

int contar_digitos(long long int n) {
  if (n < 0)
    n = -n;
  if (n < 10)
    return 1;
  return 1 + contar_digitos(n / 10);
}

int main() {
  long long int num;
  if (scanf("%lli", &num) != 1)
    return 1;
  printf("%d\n", contar_digitos(num));
  return 0;
}
