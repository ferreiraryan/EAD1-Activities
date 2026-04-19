#include <stdio.h>

long long int soma_digitos(long long int n) {
  if (n < 0)
    n = -n;
  if (n == 0)
    return 0;
  return (n % 10) + soma_digitos(n / 10);
}

int main() {
  long long int num;
  if (scanf("%lli", &num) != 1)
    return 1;
  printf("%lli\n", soma_digitos(num));
  return 0;
}
