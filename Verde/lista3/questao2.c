#include <stdio.h>

// Procedimento para ler os dados, calcular e exibir a média de salário
void calcular_e_exibir_media_salarial() {
  float salario;
  int num_filhos;

  float salario_total = 0.0;
  int numero_de_pessoas_pesquisadas = 0;

  do {
    scanf("%f%d", &salario, &num_filhos);

    if (salario < 0) {
      break;
    }

    salario_total += salario;
    numero_de_pessoas_pesquisadas++;

  } while (1);

  if (numero_de_pessoas_pesquisadas > 0) {
    printf("%.2f\n", salario_total / numero_de_pessoas_pesquisadas);
  } else {
    printf("0.00\n");
  }
}

int main() {
  calcular_e_exibir_media_salarial();
  return 0;
}
