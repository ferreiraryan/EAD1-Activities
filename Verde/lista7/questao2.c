#include <stdio.h>

#define TAM 31

void preencherdias(int dias[]) {
  for (int i = 0; i < TAM; i++) {
    scanf("%d", &dias[i]);
  }
}

void analisardias(int dias[]) {
  float soma = 0;
  int maior = 14;
  int menor = 41;
  int menorQueMedia = 0;

  for (int i = 0; i < TAM; i++) {
    if (dias[i] > maior) {
      maior = dias[i];
    }
    if (dias[i] < menor) {
      menor = dias[i];
    }
  }
  for (int i = 0; i < TAM; i++) {
    soma += dias[i];
  }
  float media = soma / TAM;

  for (int i = 0; i < TAM; i++) {
    if (dias[i] < media) {
      menorQueMedia++;
    }
  }

  printf("Menor e maior temperatura: %d e %d", menor, maior);
  printf("\nMedia de temperatura: %.2f", media);
  printf("\nNumero de dias nos quais a temperatura foi inferior a temperatura "
         "media: %d",
         menorQueMedia);
}

int main() {
  int dias[TAM];

  preencherdias(dias);
  analisardias(dias);

  return 0;
}
