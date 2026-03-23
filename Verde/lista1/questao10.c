#include <stdio.h>
int main() {
  float velocidade_atual, velocidade_maxima;

  scanf("%f%f", &velocidade_maxima, &velocidade_atual);

  if (velocidade_atual <= velocidade_maxima) {
    printf("Motorista respeitou a lei");
  } else {
    if (velocidade_atual - velocidade_maxima <= 10) {
      printf("Multa de 50 reais");
    } else if (velocidade_atual - velocidade_maxima <= 30) {
      printf("Multa de 100 reais");
    } else {
      printf("Multa de 200 reais");
    }
  }
}
