#include <math.h>
#include <stdio.h>
int main() {
  float a, b, resultado;

  scanf("%f%f", &a, &b);

  resultado = (-b / a);
  printf("%.2f", resultado);
}
