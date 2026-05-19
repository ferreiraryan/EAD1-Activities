#include <stdio.h>
#include <stdlib.h>

void preencherElementos(int elementos[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    scanf("%d", &elementos[i]);
  }
}

void encontrarMaiorElemento(int elementos[], int tamanho) {
  int maior = elementos[0];
  for (int i = 0; i < tamanho; i++) {
    if (maior < elementos[i]) {
      maior = elementos[i];
    }
  }
  printf("%d", maior);
}

int main() {
  int tamanho;
  scanf("%d", &tamanho);

  int *elementos;
  elementos = (int *)malloc(tamanho * sizeof(int));

  preencherElementos(elementos, tamanho);

  encontrarMaiorElemento(elementos, tamanho);
  free(elementos);
  return 0;
}
