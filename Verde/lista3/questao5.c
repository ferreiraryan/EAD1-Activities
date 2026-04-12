#include <stdio.h>

void exibir_media(int nota) {
  if (nota >= 90) {
    printf("A\n");
  } else if (nota >= 80) {
    printf("B\n");
  } else if (nota >= 70) {
    printf("C\n");
  } else if (nota >= 60) {
    printf("D\n");
  } else if (nota >= 40) {
    printf("E\n");
  } else {
    printf("F\n");
  }
}

int main() {
  int nota, alunos;

  scanf("%d", &alunos);

  for (int i = 1; i <= alunos; i++) {
    scanf("%d", &nota);
    exibir_media(nota);
  }

  return 0;
}
