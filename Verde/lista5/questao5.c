#include <stdio.h>

int main() {
  char c = 'A';
  int i = 10;
  float f = 3.14;
  double d = 5.6789;

  char *pc = &c;
  int *pi = &i;
  float *pf = &f;
  double *pd = &d;

  printf("=== CHAR ===\n");
  printf("Valor: %c\n", c);
  printf("Endereco: %p\n", &c);
  printf("Tamanho: %lu bytes\n\n", sizeof(c));

  printf("=== INT ===\n");
  printf("Valor: %d\n", i);
  printf("Endereco: %p\n", &i);
  printf("Tamanho: %lu bytes\n\n", sizeof(i));

  printf("=== FLOAT ===\n");
  printf("Valor: %f\n", f);
  printf("Endereco: %p\n", &f);
  printf("Tamanho: %lu bytes\n\n", sizeof(f));

  printf("=== DOUBLE ===\n");
  printf("Valor: %lf\n", d);
  printf("Endereco: %p\n", &d);
  printf("Tamanho: %lu bytes\n\n", sizeof(d));

  printf("=== CHAR* ===\n");
  printf("Valor (endereco armazenado): %p\n", pc);
  printf("Endereco do ponteiro: %p\n", &pc);
  printf("Tamanho: %lu bytes\n\n", sizeof(pc));

  printf("=== INT* ===\n");
  printf("Valor (endereco armazenado): %p\n", pi);
  printf("Endereco do ponteiro: %p\n", &pi);
  printf("Tamanho: %lu bytes\n\n", sizeof(pi));

  printf("=== FLOAT* ===\n");
  printf("Valor (endereco armazenado): %p\n", pf);
  printf("Endereco do ponteiro: %p\n", &pf);
  printf("Tamanho: %lu bytes\n\n", sizeof(pf));

  printf("=== DOUBLE* ===\n");
  printf("Valor (endereco armazenado): %p\n", pd);
  printf("Endereco do ponteiro: %p\n", &pd);
  printf("Tamanho: %lu bytes\n\n", sizeof(pd));

  return 0;
}
