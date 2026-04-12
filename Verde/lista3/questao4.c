#include <stdio.h>

void verifica_triangulo(float x, float y, float z) {
  if (x < y + z && y < x + z && z < x + y) {
    if (x == y && y == z) {
      printf("TRIANGULO EQUILATERO\n");
    } else if (x == y || x == z || y == z) {
      printf("TRIANGULO ISOSCELES\n");
    } else {
      printf("Triangulo Escaleno\n");
    }
  } else {
    printf("NAO TRIANGULO\n");
  }
}

int main() {
  float x, y, z;

  while (1) {
    if (scanf("%f%f%f", &x, &y, &z) != 3) {
      break;
    }

    if (x < 0 || y < 0 || z < 0) {
      break;
    }

    verifica_triangulo(x, y, z);
  }

  return 0;
}
