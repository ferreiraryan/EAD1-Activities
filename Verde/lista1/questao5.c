#include <stdio.h>
int main() {
  float diaria, diaria_desconto, desconto_80_ocupado, normal_50_ocupacao,
      diferenca;

  scanf("%f", &diaria);

  diaria_desconto = diaria - diaria * 0.25;
  desconto_80_ocupado = (80 * 0.80) * diaria_desconto;
  normal_50_ocupacao = diaria * (80 * 0.5);
  if (desconto_80_ocupado > normal_50_ocupacao) {
    diferenca = desconto_80_ocupado - normal_50_ocupacao;
  } else {
    diferenca = normal_50_ocupacao - desconto_80_ocupado;
  }
  printf("%.2f\n", diaria_desconto);
  printf("%.2f\n", desconto_80_ocupado);
  printf("%.2f\n", normal_50_ocupacao);
  printf("%.2f\n", diferenca);
}
