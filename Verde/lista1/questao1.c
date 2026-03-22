

#include <stdio.h>
int main() {
  int i = 0;
  int j = 0;

  scanf("%d", &i);
  scanf("%d", &j);

  if (i > j) {
    printf("%d", i);
  } else {
    printf("%d", j);
  }
}
