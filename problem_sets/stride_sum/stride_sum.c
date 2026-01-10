#include "stride_sum.h"

int sum_with_stride(const int *values, size_t length, size_t stride) {
  if (!values || length == 0 || stride == 0) {
    return 0;
  }

  int sum = 0;
  const int *cursor = values;

  for (size_t index = 0; index < length; index += stride) {
    sum += *cursor;
    cursor += stride;
  }

  return sum;
}
