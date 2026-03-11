#include <stdio.h>
int main(void) {
  float n1, n2, n3;
  char conceito;
  scanf("%f%f%f", &n1, &n2, &n3);
  float media = (n1 + n2 + n3) / 3;
  if (media < 3) {
    printf("Reprovado");
  } else if (media < 7) {
    printf("Exame: %d", 7);
  } else if (media < 10) {
    printf("Aprovado");
  } else {
    printf("nota invalida");
  }
  return 0;
}
