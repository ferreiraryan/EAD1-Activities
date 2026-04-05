#include <stdio.h>

int main() {
  unsigned int a = 2, b = 7, c = 3, n, qual = 1;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    switch (qual) {
    case 1:
      printf("%d ", a);
      qual = 2;
      a *= 2;
      break;
    case 2:
      printf("%d ", b);
      qual = 3;
      b *= 3;
      break;
    case 3:
      printf("%d ", c);
      qual = 1;
      c *= 4;
      break;
    }
  }

  return 0;
}
