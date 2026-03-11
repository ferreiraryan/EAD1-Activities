
#include <stdio.h>
int main(void) {
  int hour, min;
  scanf("%d%d", &hour, &min);
  printf("%d", (hour * 60) + min);
  return 0;
}
