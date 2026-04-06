#include <stdio.h>

int main() {
  int N, fatorial = 1;
  double E = 1.0;

  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {
    fatorial = fatorial * i;
    E = E + (1.0 / fatorial);
  }

  printf("%.2lf", E);

  return 0;
}
