#include <stdio.h>

int main() {
  FILE *arquivo1;
  FILE *arquivo2;
  FILE *arquivo3;
  char c;

  arquivo1 = fopen("dados.txt", "r");
  arquivo3 = fopen("final.txt", "w");

  while ((c = fgetc(arquivo1)) != EOF) {
    fputc(c, arquivo3);
  }
  fclose(arquivo1);

  arquivo2 = fopen("dados2.txt", "r");

  while ((c = fgetc(arquivo2)) != EOF) {
    fputc(c, arquivo3);
  }

  fclose(arquivo2);
  fclose(arquivo3);

  return 0;
}
