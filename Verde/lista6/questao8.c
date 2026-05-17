#include <stdio.h>

int main() {
  int veiculos;
  float aluguel;
  float faturamentoAnual;
  float multaMes;
  float manutencaoAnual;

  FILE *arquivo;

  printf("Quantidade de veiculos: ");
  scanf("%d", &veiculos);

  printf("Valor do aluguel: ");
  scanf("%f", &aluguel);

  faturamentoAnual = (veiculos / 3.0) * aluguel * 12;

  multaMes = ((veiculos / 3.0) / 10.0) * (aluguel * 0.2);

  manutencaoAnual = (veiculos * 0.02) * 600;

  printf("Faturamento anual: %.2f\n", faturamentoAnual);
  printf("Valor ganho com multas no mes: %.2f\n", multaMes);
  printf("Gasto anual com manutencao: %.2f\n", manutencaoAnual);

  arquivo = fopen("dados.txt", "w");

  if (arquivo == NULL) {
    printf("Erro ao criar arquivo.\n");
    return 1;
  }

  fprintf(arquivo, "%.2f\n", faturamentoAnual);
  fprintf(arquivo, "%.2f\n", multaMes);
  fprintf(arquivo, "%.2f\n", manutencaoAnual);

  fclose(arquivo);

  return 0;
}
