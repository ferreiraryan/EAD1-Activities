#include <stdio.h>

void verifica_triangulo(float x, float y, float z) {
  if (x < y + z && y < x + z && z < x + y) {
    if (x == y && y == z) {
      printf("Triangulo Equilatero\n");
    } else if (x == y || x == z || y == z) {
      printf("Triangulo Isosceles\n");
    } else {
      printf("Triangulo Escaleno\n");
    }
  } else {
    printf("Nao e um triangulo\n");
  }
}

int main() {
  float x, y, z;

  while (1) {

    verifica_triangulo(x, y, z);
  }

  return 0;
}
