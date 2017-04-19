#include <stdio.h>

int main() {
  printf("ackermann(4,1) is %d", ackermann(4,1));
  return 0;
}

int ackermann(int m, int n) {
  int a;

  if (m == 0) {
    a = n + 1;
  } else if (n == 0) {
    a = ackermann(m-1, 1);
  } else {
    a = ackermann(m-1, ackermann(m,n-1));
  }
  return a;
} 
