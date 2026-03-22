#include <stdio.h>
int main(void) {
  float raio = 0;
  scanf("%f", &raio);
  printf("Perímetro: %.2f\n", raio * (3.14159 * 2));
  printf("Área: %.2f", 3.14159 * (raio * raio));

  return 0;
}
