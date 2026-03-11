
#include <stdio.h>
int main() {
  float salario_min = 0;
  float quant_quilowat = 0;
  scanf("%f", &salario_min);
  scanf("%f", &quant_quilowat);
  float preco_quilowat = (salario_min / 7) / 100;
  float preco_pagar = preco_quilowat * quant_quilowat;
  printf("Valor do kW: %.2f\n", preco_quilowat);
  printf("Valor a pagar: %.2f\n", preco_pagar);
  printf("Valor com desconto: %.2f", preco_pagar - (preco_pagar * 0.10));
  return 0;
}
