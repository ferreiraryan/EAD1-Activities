#include <stdio.h>

void wiriteTxt(int numeros) {
  FILE *arq = fopen("dados.txt", "w");
  for (int i = 1; i <= numeros; i++) {
    fprintf(arq, "%d \n", i);
  }
  fclose(arq);
}

int main() {
  wiriteTxt(10);

  return 0;
}
