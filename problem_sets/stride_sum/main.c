#include <stdio.h>
#include <stdlib.h>

#include "stride_sum.h"

int main(int argc, char **argv) {
  if (argc < 3) {
    printf("Usage: %s <stride> <values...>\n", argv[0]);
    return 1;
  }

  size_t stride = (size_t)strtoul(argv[1], NULL, 10);
  size_t length = (size_t)(argc - 2);

  int values[length];
  for (size_t i = 0; i < length; i++) {
    values[i] = atoi(argv[i + 2]);
  }

  int sum = sum_with_stride(values, length, stride);
  printf("Stride sum: %d\n", sum);
  return 0;
}
