#include <stdio.h>

int main() {
  FILE *arquivo;
  char c;
  int quantidadeDeA = 0;
  arquivo = fopen("dados.txt", "r");

  while ((c = fgetc(arquivo)) != EOF) {
    if (c == 'a') {
      quantidadeDeA++;
    }
  }
  printf("quantiade de a: %d", quantidadeDeA);
  return 0;
}
