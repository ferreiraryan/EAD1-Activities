#include <stdio.h>
#include <stdlib.h>

void wiriteTxt(char frase) {
  FILE *arq = fopen("dados.txt", "w");
  for (int i = 1; i <= numeros; i++) {
    fprintf(arq, "%d \n", i);
  }
  fclose(arq);
}

int main() {
  char *string = (char *)malloc(100 * sizeof(char));
  return 0;

}
