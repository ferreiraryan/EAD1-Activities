#include <stdio.h>

int main() {
  FILE *arquivo;
  char c;
  arquivo = fopen("dados.txt", "w");

  printf("digite o txto e pressione enter para finalizar: ");

  while ((c = getchar()) != '\n') {
    fputc(c, arquivo);
  }
  fclose(arquivo);

  return 0;
}
