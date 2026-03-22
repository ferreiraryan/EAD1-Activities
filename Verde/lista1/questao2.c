#include <stdio.h>
int main() {
  int i = 0;
  int j = 0;

  scanf("%d", &i);
  scanf("%d", &j);
  int soma = i + j;

  if (soma >= 10) {
    printf("%d", soma + 5);
  } else {
    printf("%d", soma + 7);
  }
}
