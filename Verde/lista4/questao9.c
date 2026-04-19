#include <stdio.h>

int resto(int numerador, int denominador) {
  if (denominador == 0)
    return -1;
  if (numerador < denominador)
    return numerador;
  return resto(numerador - denominador, denominador);
}

int main() {
  int n, d;
  if (scanf("%d %d", &n, &d) != 2 || d <= 0)
    return 1;
  printf("%d\n", resto(n, d));
  return 0;
}
