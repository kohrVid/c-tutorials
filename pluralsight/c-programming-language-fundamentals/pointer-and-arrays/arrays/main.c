#include <stdio.h>

int main(void) {
  int values[5];
  values[0] = 1;
  values[4] = values[0];

  int *ptr = values;
  int *last = &values[4];

  printf("ptr      --> %d\n", ptr);
  printf("++ptr    --> %d\n", ++ptr);
  printf("ptr++    --> %d\n", ptr++);
  printf("last     --> %d\n", last);
  //Notice, C lets you increment beyond the last element in the array which ought to cause an error but doesn't for some reason (it would in C++ or Go)
  printf("ptr += 3 --> %d\n", ptr += 3);
}
