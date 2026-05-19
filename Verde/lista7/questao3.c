#include <stdio.h>

#define TAM 10

void preencherVetor(int vetor[]) {
  for (int i = 0; i < TAM; i++) {
    scanf("%d", &vetor[i]);
  }
}

void analisarVetores(int vetor1[], int vetor2[]) {
  int vetorFinal[(TAM * 2)];
  int indice1 = 0;
  int indice2 = 0;
  for (int i = 0; i < (TAM * 2); i++) {
    if (i % 2 == 0) {
      vetorFinal[i] = vetor1[indice1];
      indice1++;
    } else {
      vetorFinal[i] = vetor2[indice2];
      indice2++;
    }
  }
  for (int i = 0; i < (TAM * 2); i++) {
    printf("%d ", vetorFinal[i]);
  }
}

int main() {
  int vetor1[TAM];
  int vetor2[TAM];

  preencherVetor(vetor1);
  preencherVetor(vetor2);
  analisarVetores(vetor1, vetor2);

  return 0;
}
