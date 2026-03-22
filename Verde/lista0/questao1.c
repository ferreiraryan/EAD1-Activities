#include <stdio.h>
int main() {
  int num, invertido = 0, resto;
  scanf("%d", &num);

  while (num != 0) {
    resto = num % 10;
    invertido = invertido * 10 + resto;
    num /= 10;
  }

  printf("%i", invertido);
  return 0;
}
