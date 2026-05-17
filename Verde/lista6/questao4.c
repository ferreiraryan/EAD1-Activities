#include <stdio.h>

int main() {
  FILE *arquivo;
  char c;
  int quantidadeDeLinha = 0;
  arquivo = fopen("dados.txt", "r");

  while ((c = fgetc(arquivo)) != EOF) {
    printf("%c", c);
    if (c == '\n') {
      quantidadeDeLinha++;
    }
  }
  printf("quantiade de linhas: %d", quantidadeDeLinha);
  return 0;
}
