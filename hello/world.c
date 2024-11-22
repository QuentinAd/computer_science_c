#include <stdio.h>

int add(int a, int b);
int substract(int a, int b);

int main(void) {
  printf("Hello, World!\n");
  printf("1 + 1 = %i\n", add(1, 1));
  printf("1 - 1 = %i\n", substract(1, 1));
  return 0;
}