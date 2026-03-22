#include <stdio.h>
int main() {
  int ano = 0, idade = 0;
  char texto;

  scanf("%d", &ano);

  scanf(" %c", &texto);

  if (texto == 'S') {
    idade = 2026 - ano;
  } else {
    idade = 2025 - ano;
  }
  printf("%d\n", idade);

  if (idade > 18) {
    printf("Pode dirigir");
  } else {
    printf("Nao pode dirigir");
  }
}
