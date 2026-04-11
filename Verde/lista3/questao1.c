#include <stdio.h>

void media_por_letra(float nota1, float nota2, float nota3, char tipo) {
  if (tipo == 'P') {
    printf("%.2f\n", ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10);
  } else if (tipo == 'A') {
    printf("%.2f\n", (nota1 + nota2 + nota3) / 3);
  }
}
int main() {
  float n1, n2, n3;
  int alunos;
  char nota;

  scanf("%d", &alunos);

  for (int i = 1; i <= alunos; i++) {
    scanf("%f%f%f %c", &n1, &n2, &n3, &nota);
    media_por_letra(n1, n2, n3, nota);
  }

  return 0;
}
