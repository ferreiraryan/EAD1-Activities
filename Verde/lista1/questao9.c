#include <stdio.h>
int main() {
  char opcao;

  scanf(" %c", &opcao);
  switch (opcao) {
  case '<':
    printf("SINAL DE MENOR");
    break;
  case '>':
    printf("SINAL DE MAIOR");
    break;
  case '=':
    printf("SINAL DE IGUAL");
    break;
  default:
    printf("OUTRO SINAL");
    break;
  }
}
