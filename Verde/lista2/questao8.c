#include <stdio.h>

int main() {
  int L;
  int a = 0;
  int b = 1;
  int proximo_termo;

  scanf("%d", &L);

  if (L <= 0) {
  } else {

    while (b < L) {
      printf("%d\n", b);
      proximo_termo = a + b;
      a = b;
      b = proximo_termo;
    }
  }

  return 0;
}
