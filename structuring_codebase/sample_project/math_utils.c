#include "math_utils.h"

int add(int left, int right) { return left + right; }

int clamp(int value, int min_value, int max_value) {
  if (value < min_value) {
    return min_value;
  }

  if (value > max_value) {
    return max_value;
  }

  return value;
}
