#include <stdio.h>

int main() {
  FILE *arquivo;
  int nLetras, vogais = 0;
  char letra;

  printf("Quantas letras deseja digitar? ");
  scanf("%d", &nLetras);

  while (getchar() != '\n')
    ;

  arquivo = fopen("dados.txt", "w");

  printf("Digite as %d letras:\n", nLetras);
  for (int i = 0; i < nLetras; i++) {
    scanf("%c", &letra);
    fputc(letra, arquivo);
  }
  fclose(arquivo);

  arquivo = fopen("dados.txt", "r");

  while ((letra = fgetc(arquivo)) != EOF) {
    if (letra >= 'A' && letra <= 'Z') {
    }
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' ||
        letra == 'u') {
      vogais++;
    }
  }
  printf("O número de vogais no arquivo é: %d\n", vogais);
  fclose(arquivo);

  return 0;
}
