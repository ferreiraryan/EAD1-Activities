#include <stdio.h>

int divisao(int numerador, int denominador) {
  if (denominador == 0)
    return 0;
  if (numerador < denominador)
    return 0;
  return 1 + divisao(numerador - denominador, denominador);
}

int main() {
  int n, d;
  if (scanf("%d %d", &n, &d) != 2 || d == 0)
    return 1;
  printf("%d\n", divisao(n, d));
  return 0;
}
