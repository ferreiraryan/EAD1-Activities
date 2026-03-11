#include <math.h>
#include <stdio.h>
int main(void) {
  int razao, p1;

  scanf("%d%d", &razao, &p1);

  printf("%.0f", p1 * pow(razao, 4));

  return 0;
}
