#include <stdio.h>

int main() {
  float compra, venda;
  int lucro_menos_10 = 0;
  int lucro_entre_10_e_20 = 0;
  int lucro_mais_20 = 0;
  float total_compra = 0.0;
  float total_venda = 0.0;
  float lucro_total = 0.0;
  float lucro_percentual;

  scanf("%f", &compra);

  while (compra != 0) {
    scanf("%f", &venda);

    total_compra += compra;
    total_venda += venda;

    lucro_total += (venda - compra);

    lucro_percentual = ((venda - compra) / compra) * 100.0;

    if (lucro_percentual < 10.0) {
      lucro_menos_10++;
    } else if (lucro_percentual <= 20.0) {
      lucro_entre_10_e_20++;
    } else {
      lucro_mais_20++;
    }

    scanf("%f", &compra);
  }

  printf("%d\n", lucro_menos_10);
  printf("%d\n", lucro_entre_10_e_20);
  printf("%d\n", lucro_mais_20);
  printf("%.2f\n", total_compra);
  printf("%.2f\n", total_venda);
  printf("%.2f\n", lucro_total);

  return 0;
}
