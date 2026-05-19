#include <stdio.h>

#define TAM 5

void preencherMatriz(int elementos[TAM][TAM]) {
  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM; j++) {
      scanf("%d", &elementos[i][j]);
    }
  }
}

int somaQuintaLinha(int matriz[TAM][TAM]) {
  int soma = 0;
  for (int i = 0; i < TAM; i++) {
    soma += matriz[4][i];
  }
  return soma;
}
int somaSegundaColuna(int matriz[TAM][TAM]) {
  int soma = 0;
  for (int i = 0; i < TAM; i++) {
    soma += matriz[i][1];
  }
  return soma;
}

int somaDiagonalPrincipal(int matriz[TAM][TAM]) {

  int soma = 0;

  for (int i = 0; i < TAM; i++) {
    soma += matriz[i][i];
  }

  return soma;
}

int somaDiagonalSecundaria(int matriz[TAM][TAM]) {

  int soma = 0;

  for (int i = 0; i < TAM; i++) {
    soma += matriz[i][TAM - 1 - i];
  }

  return soma;
}

int somaTotal(int matriz[TAM][TAM]) {

  int soma = 0;

  for (int i = 0; i < TAM; i++) {

    for (int j = 0; j < TAM; j++) {

      soma += matriz[i][j];
    }
  }

  return soma;
}

int main() {
  int matriz[TAM][TAM];
  preencherMatriz(matriz);

  printf("%d\n", somaQuintaLinha(matriz));
  printf("%d\n", somaSegundaColuna(matriz));
  printf("%d\n", somaDiagonalPrincipal(matriz));
  printf("%d\n", somaDiagonalSecundaria(matriz));
  printf("%d\n", somaTotal(matriz));
  return 0;
}
