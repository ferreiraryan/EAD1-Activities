#include <stdio.h>

void exibe_valores_crescentes(int n1, int n2, int n3) {
  int maior = 0;

  if (n2 > n1 && n1 > n3) {
    maior = n2;
    n2 = n1;
    n1 = n3;
    n3 = maior;
  }
  if (n3 > n2 && n1 > n2) {
    maior = n3;
    n3 = n1;
    n1 = n2;
    n2 = n3;
    n3 = maior;
  }
  if (n2 > n1 && n2 > n3) {
    maior = n1;
    n1 = n2;
    n2 = n3;
    n3 = maior;
  }
  if (n1 > n2 && n2 > n3) {
    maior = n1;
    n1 = n3;
    n3 = maior;
  }

  printf("%d %d %d\n", n1, n2, n3);
}

int main() {
  int n1, n2, n3, total;
  scanf("%d", &total);
  for (int i = 1; i <= total; i++) {
    scanf("%d%d%d", &n1, &n2, &n3);
    exibe_valores_crescentes(n1, n2, n3);
  }
  return 0;
}
