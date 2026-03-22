#include <stdio.h>
int main() {
  int nota = 0;

  scanf("%d", &nota);

  if (nota >= 8) {
    printf("Ótimo");
  } else if (nota >= 7) {
    printf("Bom");
  } else if (nota >= 5) {
    printf("Regular");
  } else {
    printf("Instatisfatorio");
  }
}
