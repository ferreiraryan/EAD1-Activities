#include <stdio.h>

int main() {
  int num = 10;
  float real = 3.5;
  char ch = 'A';

  int *p_num = &num;
  float *p_real = &real;
  char *p_ch = &ch;

  printf("=== ANTES ===\n");

  printf("num = %d | endereco = %p\n", num, &num);
  printf("p_num = %p | endereco do ponteiro = %p\n\n", p_num, &p_num);

  printf("real = %.2f | endereco = %p\n", real, &real);
  printf("p_real = %p | endereco do ponteiro = %p\n\n", p_real, &p_real);

  printf("ch = %c | endereco = %p\n", ch, &ch);
  printf("p_ch = %p | endereco do ponteiro = %p\n\n", p_ch, &p_ch);

  printf("Digite o novo inteiro: ");
  scanf("%d", p_num);

  printf("Digite o novo real: ");
  scanf("%f", p_real);

  printf("Digite o novo caractere: ");
  scanf(" %c", p_ch);

  printf("\n=== DEPOIS ===\n");

  printf("num = %d | endereco = %p\n", num, &num);
  printf("p_num = %p | endereco do ponteiro = %p\n\n", p_num, &p_num);

  printf("real = %.2f | endereco = %p\n", real, &real);
  printf("p_real = %p | endereco do ponteiro = %p\n\n", p_real, &p_real);

  printf("ch = %c | endereco = %p\n", ch, &ch);
  printf("p_ch = %p | endereco do ponteiro = %p\n\n", p_ch, &p_ch);

  return 0;
}
