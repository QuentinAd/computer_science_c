#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  size_t count = 5;

  if (argc > 1) {
    count = (size_t)strtoul(argv[1], NULL, 10);
    if (count == 0) {
      fprintf(stderr, "Provide a positive array size.\n");
      return 1;
    }
  }

  int *values = calloc(count, sizeof(int));
  if (!values) {
    fprintf(stderr, "Allocation failed.\n");
    return 1;
  }

  for (size_t i = 0; i < count; ++i) {
    values[i] = (int)(i * 3);
  }

  printf("Allocated %zu integers:\n", count);
  for (size_t i = 0; i < count; ++i) {
    printf("values[%zu] = %d\n", i, values[i]);
  }

  free(values);
  return 0;
}
