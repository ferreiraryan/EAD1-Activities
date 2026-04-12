#include <stdio.h>

double calcular_S(int N) {
  double S = 1.0;

  long long int fatorial_atual = 1;

  for (int i = 1; i <= N; i++) {
    fatorial_atual *= i;
    S += 1.0 / fatorial_atual;
  }

  return S;
}

int main() {
  int N;

  scanf("%d", &N);

  printf("%.6f\n", calcular_S(N));

  return 0;
}
