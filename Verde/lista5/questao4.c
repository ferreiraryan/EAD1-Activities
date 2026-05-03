#include <stdio.h>

int main() {
  int n1, n2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  printf("Endereco de n1: %p\n", (void *)&n1);
  printf("Endereco de n2: %p\n", (void *)&n2);

  if (&n1 > &n2) {
    printf("\nO maior endereco e o de n1: %p\n", (void *)&n1);
  } else if (&n2 > &n1) {
    printf("\nO maior endereco e o de n2: %p\n", (void *)&n2);
  } else {
    printf("\nOs enderecos sao iguais \n");
  }

  return 0;
}
