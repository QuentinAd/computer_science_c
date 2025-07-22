#include <stdbool.h>
#include <stdio.h>

bool divide(int a, int b, int *result) {
  if (b == 0) {
    return false;
  }
  *result = a / b;
  return true;
}

int main(void) {
  int r;
  if (divide(10, 0, &r)) {
    printf("Result: %d\n", r);
  } else {
    fprintf(stderr, "Division by zero error\n");
  }
  return 0;
}
