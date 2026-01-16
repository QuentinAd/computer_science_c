#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  size_t count = 5;

  if (argc > 1) {
    char *endptr = NULL;
    unsigned long parsed = 0;

    errno = 0;
    parsed = strtoul(argv[1], &endptr, 10);

    if (errno == ERANGE || endptr == argv[1] || *endptr != '\0') {
      fprintf(stderr, "Provide a valid positive array size.\n");
      return 1;
    }

    if (parsed == 0 || parsed > SIZE_MAX / sizeof(int)) {
      fprintf(stderr, "Provide a positive array size within limits.\n");
      return 1;
    }

    count = (size_t)parsed;
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
