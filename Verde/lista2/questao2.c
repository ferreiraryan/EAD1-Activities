#include <stdio.h>

int main() {
  int positivos = 0, negativos = 0, zeros = 0;
  int n, num;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &num);

    if (num > 0) {
      positivos++;
    } else if (num == 0) {
      zeros++;
    } else {
      negativos++;
    }
  }

  printf("Positivos: %.2f%%\n", (float)positivos / n * 100);
  printf("Negativos: %.2f%%\n", (float)negativos / n * 100);
  printf("Zeros: %.2f%%\n", (float)zeros / n * 100);

  return 0;
}
