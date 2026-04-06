#include <stdio.h>

int main() {
  int L;
  int a = 0;
  int b = 1;
  int proximo_termo;
  int contador;

  scanf("%d", &L);

  if (L <= 0) {
    printf("Nenhum elemento para exibir.\n");
  } else if (L == 1) {
    printf("%d\n", a);
  } else {
    printf("%d\n", b);

    for (contador = 2; contador <= L; contador++) {
      proximo_termo = a + b;
      printf("%d\n", proximo_termo);
      a = b;
      b = proximo_termo;
    }
  }

  return 0;
}
