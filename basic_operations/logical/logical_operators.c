#include <stdbool.h>
#include <stdio.h>

static void print_access(bool has_id, bool is_guardian, int age) {
  if ((age >= 18 && has_id) || is_guardian) {
    printf("Access granted.\n");
  } else {
    printf("Access denied.\n");
  }
}

int main(void) {
  print_access(true, false, 20);
  print_access(false, true, 16);
  print_access(false, false, 19);
  return 0;
}
