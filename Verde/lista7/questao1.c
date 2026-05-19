#include <stdio.h>

void preencherNotas(float notas[]) {
  for (int i = 0; i < 10; i++) {
    scanf("%f", &notas[i]);
  }
}

void analisarNotas(float notas[]) {
  float soma = 0;
  int aprovados = 0;

  for (int i = 0; i < 10; i++) {
    soma += notas[i];
  }
  float media = soma / 10;

  for (int i = 0; i < 10; i++) {
    if (notas[i] > media) {
      aprovados++;
    }
  }
  printf("Media da turma: %.2f\n", media);
  printf("Quantidade de alunos aprovadoas %d\n", aprovados);
}

int main() {
  float notas[10];

  preencherNotas(notas);
  analisarNotas(notas);

  return 0;
}
