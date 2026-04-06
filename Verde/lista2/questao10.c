#include <stdio.h>

int main() {
  int voto;
  int c1 = 0;
  int c2 = 0;
  int c3 = 0;
  int c4 = 0;
  int nulos = 0;
  int brancos = 0;

  scanf("%d", &voto);

  while (voto != 0) {
    switch (voto) {
    case 1:
      c1++;
      break;
    case 2:
      c2++;
      break;
    case 3:
      c3++;
      break;
    case 4:
      c4++;
      break;
    case 5:
      nulos++;
      break;
    case 6:
      brancos++;
      break;
    default:
      break;
    }
    scanf("%d", &voto);
  }

  printf("%d\n", c1);
  printf("%d\n", c2);
  printf("%d\n", c3);
  printf("%d\n", c4);
  printf("%d\n", nulos);
  printf("%d\n", brancos);

  return 0;
}
