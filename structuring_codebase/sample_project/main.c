#include "greeting.h"
#include "math_utils.h"

#include <stdio.h>

int main(void) {
  int score = add(12, 18);
  int clamped = clamp(score, 0, 25);

  print_greeting("C learner");
  printf("Score: %d (clamped to %d)\n", score, clamped);

  return 0;
}
