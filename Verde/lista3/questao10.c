#include <stdio.h>

char retorna_categoria(int idade) {
  if (idade >= 18)
    return 'A';
  if (idade >= 16)
    return 'B';
  if (idade >= 14)
    return 'C';
  if (idade >= 11)
    return 'D';
  if (idade >= 8)
    return 'E';
  if (idade >= 5)
    return 'F';
  return '\0';
}

int main() {
  int quantidade, idade;

  if (scanf("%d", &quantidade) != 1)
    return 0;

  for (int i = 0; i < quantidade; i++) {
    if (scanf("%d", &idade) == 1) {
      char res = retorna_categoria(idade);
      if (res != '\0') {
        printf("%c\n", res);
      }
    }
  }

  return 0;
}
