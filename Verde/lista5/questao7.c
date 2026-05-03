#include <stdio.h>

int ordenar(int *a, int *b, int *c) {
  int temp;

  if (*a > *b) {
    temp = *a;
    *a = *b;
    *b = temp;
  }

  if (*a > *c) {
    temp = *a;
    *a = *c;
    *c = temp;
  }

  if (*b > *c) {
    temp = *b;
    *b = *c;
    *c = temp;
  }

  if (*a == *b && *b == *c) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int x, y, z;
  int resultado;

  printf("Digite tres numeros:\n");
  scanf("%d %d %d", &x, &y, &z);

  resultado = ordenar(&x, &y, &z);

  printf("\nValores ordenados: %d %d %d\n", x, y, z);

  if (resultado == 1) {
    printf("Todos os valores sao iguais.\n");
  } else {
    printf("Existem valores diferentes.\n");
  }

  return 0;
}
