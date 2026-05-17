#include <stdio.h>

int main() {
  FILE *arquivo;

  float numero;
  float maior;
  float menor;
  float soma = 0;
  float media;

  int quantidade = 0;

  arquivo = fopen("entrada.txt", "r");

  if (fscanf(arquivo, "%f", &numero) != EOF) {
    maior = numero;
    menor = numero;

    soma += numero;
    quantidade++;

    while (fscanf(arquivo, "%f", &numero) != EOF) {
      if (numero > maior) {
        maior = numero;
      }

      if (numero < menor) {
        menor = numero;
      }

      soma += numero;
      quantidade++;
    }

    media = soma / quantidade;

    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media: %.2f\n", media);
  } else {
    printf("Arquivo vazio.\n");
  }

  fclose(arquivo);

  return 0;
}
