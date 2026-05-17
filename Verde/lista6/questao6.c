#include <stdio.h>

int main() {
  FILE *arquivo;
  int numero, somaDiv = 0;

  scanf("%d", &numero);
  for (int i = 1; i <= numero; i++) {
    if (numero % i == 0) {
      printf("%d \n", i);
      somaDiv += i;
    }
  }
  arquivo = fopen("dados.txt", "w");
  fprintf(arquivo, "%d", somaDiv);

  return 0;
}
