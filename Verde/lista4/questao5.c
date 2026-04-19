#include <stdio.h>

int mdc(int a, int b) {
  if (b == 0)
    return a;
  return mdc(b, a % b);
}

int main() {
  int a, b;
  if (scanf("%d %d", &a, &b) != 2)
    return 1;
  printf("%d\n", mdc(a, b));
  return 0;
}
