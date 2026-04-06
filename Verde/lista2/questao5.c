#include <stdio.h>

int main() {
  float salario;
  int num_filhos;

  float soma_salarios = 0.0;
  int soma_filhos = 0;
  int total_pessoas = 0;
  float maior_salario = 0.0;
  int pessoas_salario_ate_100 = 0;

  scanf("%f", &salario);

  while (salario >= 0) {
    scanf("%d", &num_filhos);

    soma_salarios += salario;
    soma_filhos += num_filhos;
    total_pessoas++;

    if (salario > maior_salario) {
      maior_salario = salario;
    }

    if (salario <= 100.0) {
      pessoas_salario_ate_100++;
    }
    printf("\n");

    scanf("%f", &salario);
  }

  if (total_pessoas > 0) {
    printf("%.2f\n", soma_salarios / total_pessoas);
    printf("%.2f\n", (float)soma_filhos / total_pessoas);
    printf("%.2f\n", maior_salario);
    printf("%.2f%%\n",
           ((float)pessoas_salario_ate_100 / total_pessoas) * 100.0);
  }
  return 0;
}
