#include <stdio.h>

void positivo_ou_falso(int numero) {
  if (numero > 0) {
    printf("SIM\n");
  } else {
    printf("NAO\n");
  }
}

int main() {
  int num, quantidade;

  scanf("%d", &quantidade);

  for (int i = 1; i <= quantidade; i++) {
    scanf("%d", &num);
    positivo_ou_falso(num);
  }

  return 0;
}
