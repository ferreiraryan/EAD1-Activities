#include <math.h>
#include <stdio.h>

int main() {
  float cateto1, cateto2;
  scanf("%f%f", &cateto1, &cateto2);
  printf("Hipotenusa: %.2f", sqrtf((cateto1 * cateto1) + (cateto2 * cateto2)));
  return 0;
}
