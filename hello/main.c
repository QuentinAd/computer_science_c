#include <stdio.h>

int hello();
int add(int a, int b);
int subtract(int a, int b);

int main(void) {
  hello();
  printf("1 + 1 = %i\n", add(1, 1));
  printf("1 - 1 = %i\n", subtract(1, 1));
  return 0;
}