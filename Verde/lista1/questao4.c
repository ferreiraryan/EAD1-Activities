#include <stdio.h>
int main() {
  int nota = 0;

  scanf("%d", &nota);

  if (nota >= 8 && nota <= 10) {
    printf("Otimo");
  } else if (nota >= 7) {
    printf("Bom");
  } else if (nota >= 5) {
    printf("Regular");
  } else if (nota < 5) {
    printf("Insatisfatorio");
  }
}
