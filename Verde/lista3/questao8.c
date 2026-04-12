#include <stdio.h>

double calcular_S(int N) {
  double S = 0.0;

  for (int n = 1; n <= N; n++) {
    double numerador = (double)n * n + 1;
    double denominador = (double)n + 3;

    S += numerador / denominador;
  }

  return S;
}

int main() {
  int N;

  scanf("%d", &N);

  printf("%.6f\n", calcular_S(N));

  return 0;
}
