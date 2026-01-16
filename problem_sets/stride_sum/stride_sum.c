#include "stride_sum.h"

int sum_with_stride(const int *values, size_t length, size_t stride) {
  if (!values || length == 0 || stride == 0) {
    return 0;
  }

  int sum = 0;

  for (size_t index = 0; index < length; index += stride) {
    sum += values[index];
  }

  return sum;
}
