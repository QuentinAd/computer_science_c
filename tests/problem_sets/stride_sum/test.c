#include "../../../Unity/src/unity.h"
#include "../../../problem_sets/stride_sum/stride_sum.h"

void setUp(void) {}
void tearDown(void) {}

void test_stride_two() {
  int values[] = {1, 2, 3, 4, 5, 6};
  TEST_ASSERT_EQUAL_INT(9, sum_with_stride(values, 6, 2));
}

void test_stride_three() {
  int values[] = {5, -1, 7, 3, 2, 9, 4};
  TEST_ASSERT_EQUAL_INT(12, sum_with_stride(values, 7, 3));
}

void test_stride_larger_than_length() {
  int values[] = {10, 20, 30};
  TEST_ASSERT_EQUAL_INT(10, sum_with_stride(values, 3, 10));
}

void test_empty_or_invalid_inputs() {
  int values[] = {1, 2, 3};
  TEST_ASSERT_EQUAL_INT(0, sum_with_stride(values, 0, 1));
  TEST_ASSERT_EQUAL_INT(0, sum_with_stride(values, 3, 0));
  TEST_ASSERT_EQUAL_INT(0, sum_with_stride(NULL, 3, 1));
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_stride_two);
  RUN_TEST(test_stride_three);
  RUN_TEST(test_stride_larger_than_length);
  RUN_TEST(test_empty_or_invalid_inputs);
  return UNITY_END();
}
