#include <stdio.h>

int main() {
  double num;
  int div3e9 = 0, div2 = 0, div5 = 0;
  for (int i = 0; i < 10; i++) {
    scanf("%lf", &num);
    if (num == (int)num) {
      int num_int = (int)num;
      if (num_int % 9 == 0) {
        div3e9++;
      } else if (num_int % 2 == 0) {
        div2++;
      } else if (num_int % 5 == 0) {
        div5++;
      } else {
        printf("Numero nao eh divisivel pelos valores \n");
      }
    } else {

      printf("Numero nao eh divisivel pelos valores \n");
    }
  }
  printf("%d Numeros sao divisiveis por 3 e por 9\n", div3e9);
  printf("%d Numeros sao divisiveis por 2\n", div2);
  printf("%d Numeros sao divisiveis por 5\n", div5);

  return 0;
}
