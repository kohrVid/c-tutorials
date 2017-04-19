#include <stdio.h>

int main() {
  int apples = 5;
  int *p = &apples;
  int oranges;

  if (p) {
    oranges = *p +6;
  }

  printf("%d\n", oranges);
}
