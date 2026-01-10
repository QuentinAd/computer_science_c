#include <stdio.h>

int main(void) {
  int values[] = {3, 6, 9, 12, 15};
  size_t count = sizeof(values) / sizeof(values[0]);
  int *cursor = values;
  size_t step = 1;

  printf("Pointer arithmetic over an int array:\n\n");

  for (size_t index = 0; index < count; index += step) {
    printf("index %zu | address %p | value %d\n", index,
           (void *)(cursor + index), *(cursor + index));
  }

  return 0;
}
