#include <stdio.h>

static void print_for_loop(void) {
  for (int i = 0; i < 3; i++) {
    printf("for: %d\n", i);
  }
}

static void print_while_loop(void) {
  int count = 3;
  while (count > 0) {
    printf("while: %d\n", count);
    count--;
  }
}

static void print_do_while_loop(void) {
  int value = 0;
  do {
    printf("do-while: %d\n", value);
    value++;
  } while (value < 2);
}

int main(void) {
  print_for_loop();
  print_while_loop();
  print_do_while_loop();
  return 0;
}
