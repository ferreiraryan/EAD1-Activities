#include <stdio.h>

int divisores(int n, int *min, int *max) {
  int i;
  int encontrou = 0;

  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      if (!encontrou) {
        *min = i;
        encontrou = 1;
      }
      *max = i;
    }
  }

  if (encontrou) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n, min, max;
  int resultado;

  printf("Digite um numero: ");
  scanf("%d", &n);

  resultado = divisores(n, &min, &max);

  if (resultado == 0) {
    printf("O numero %d eh primo.\n", n);
  } else {
    printf("O numero %d nao eh primo.\n", n);
    printf("Menor divisor : %d\n", min);
    printf("Maior divisor: %d\n", max);
  }

  return 0;
}
