#include <stdio.h>

int main() {
  int n;
  float S = 0.0;
  int i;

  scanf("%d", &n);

  while (n <= 0) {
    scanf("%d", &n);
  }

  for (i = 1; i <= n; i++) {
    S = S + (1.0 / i);
  }

  printf("%.2f\n", S);

  return 0;
}
