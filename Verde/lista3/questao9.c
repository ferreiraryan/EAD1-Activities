#include <stdio.h>

float calcular_media_aprovados(int num_alunos) {
  float nota;
  float soma_notas_aprovadas = 0.0;
  int alunos_aprovados = 0;

  for (int i = 0; i < num_alunos; i++) {
    scanf("%f", &nota);

    if (nota >= 6.0) {
      soma_notas_aprovadas += nota;
      alunos_aprovados++;
    }
  }

  if (alunos_aprovados > 0) {
    return soma_notas_aprovadas / alunos_aprovados;
  } else {
    return 0.0;
  }
}

int main() {
  int num_alunos;
  float media_final;

  scanf("%d", &num_alunos);

  media_final = calcular_media_aprovados(num_alunos);

  printf("%.1f\n", media_final);

  return 0;
}
