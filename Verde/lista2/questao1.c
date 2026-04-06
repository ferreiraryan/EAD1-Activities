#include <stdio.h>
int main() {
  int positivos = 0, negativos = 0, zeros = 0;
  int n, num;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &num);
    if (num > 0) {
      positivos++;
    }
    if (num == 0) {
      zeros++;
    }
    if (num < 0) {
      negativos++;
    }
  }
  printf("%d positivos\n", positivos);
  printf("%d negativos\n", negativos);
  printf("%d zeros", zeros);
  return 0;
}
