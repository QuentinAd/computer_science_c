#include <stdio.h>

int main(void) {
  int total = 0;
  int count = 0;

  total += 10;
  count += 1;

  total += 15;
  count += 1;

  total -= 3;

  printf("Total: %d\n", total);
  printf("Entries: %d\n", count);
  printf("Average: %.2f\n", (double)total / (double)count);

  return 0;
}
