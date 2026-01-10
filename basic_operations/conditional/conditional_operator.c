#include <stdio.h>

static const char *status_label(int score) {
  return (score >= 60) ? "pass" : "fail";
}

int main(void) {
  printf("Score 55: %s\n", status_label(55));
  printf("Score 82: %s\n", status_label(82));
  return 0;
}
