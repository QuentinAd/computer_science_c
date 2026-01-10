#include <stdio.h>

static void print_score_status(int score) {
  if (score >= 90 && score <= 100) {
    printf("Score %d: excellent.\n", score);
  } else if (score >= 70 && score < 90) {
    printf("Score %d: good.\n", score);
  } else if (score >= 0 && score < 70) {
    printf("Score %d: needs improvement.\n", score);
  } else {
    printf("Score %d: invalid.\n", score);
  }
}

int main(void) {
  print_score_status(95);
  print_score_status(72);
  print_score_status(40);
  print_score_status(120);
  return 0;
}
