#include <stdio.h>

int main() {
  int apples = 5;
  int *p = &apples;

  /*int *p = 0;*/
  int oranges = *p +6;

  printf("%d\n", oranges);
}
