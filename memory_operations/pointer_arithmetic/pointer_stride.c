#include <stddef.h>
#include <stdio.h>

int main(void) {
  int values[] = {5, 10, 15, 20, 25, 30};
  size_t count = sizeof(values) / sizeof(values[0]);
  int *base = values;
  size_t step = 2;

  printf("Base address: %p\n", (void *)base);

  for (size_t index = 0; index < count; index += step) {
    int *cursor = base + index;
    printf("index %zu -> %p = %d\n", index, (void *)cursor, *cursor);
  }

  return 0;
}
