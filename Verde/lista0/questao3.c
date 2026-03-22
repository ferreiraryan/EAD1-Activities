#include <math.h>
#include <stdio.h>

int main() {
  float base, altura;
  float perimetro, area, diagonal;

  scanf("%f", &base);

  scanf("%f", &altura);

  perimetro = 2 * (base + altura);
  area = base * altura;
  diagonal = sqrt(pow(base, 2) + pow(altura, 2));

  printf("Perímetro: %.2f\n", perimetro);
  printf("Área: %.2f\n", area);
  printf("Diagonal: %.2f\n", diagonal);

  return 0;
}
