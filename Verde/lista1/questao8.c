#include <stdio.h>
int main() {
  char opcao;
  float salario;

  scanf(" %c", &opcao);
  scanf("%f", &salario);
  switch (opcao) {
  case 'A':
    salario = salario + (salario * 0.08);
    break;
  case 'B':
    salario = salario + (salario * 0.11);
    break;
  case 'C':
    if (salario <= 1000) {
      salario = salario + 350.00;
    } else {
      salario = salario + 200;
    }
  }
  printf("%.2f", salario);
}
