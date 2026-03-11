#include <stdio.h>
int main(void) {
  float n1, n2, n3, p1 = 2, p2 = 3, p3 = 5;
  char conceito;
  scanf("%f%f%f", &n1, &n2, &n3);
  float som_nota_peso = (n1 * p1) + (n2 * p2) + (n3 * p3);
  float media = som_nota_peso / (p1 + p2 + p3);
  if (media < 5) {
    conceito = 'E';
  } else if (media < 6) {
    conceito = 'D';
  } else if (media < 7) {
    conceito = 'C';
  } else if (media < 8) {
    conceito = 'B';
  } else if (media < 10) {
    conceito = 'A';
  } else {
    conceito = 'O';
  }
  printf("Media: %.2f\nConceito: %c", media, conceito);
  return 0;
}
