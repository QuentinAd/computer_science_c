#include "../../Unity/src/unity.h"
#include "../memory_operations/memory_utils/memory_utils.h"
#include "sort.h"
#include "stack.h"

#include <string.h>

void setUp(void) {}
void tearDown(void) {}

static void assert_arrays_equal(const int *expected, const int *actual,
                                int size) {
  for (int i = 0; i < size; ++i) {
    TEST_ASSERT_EQUAL_INT(expected[i], actual[i]);
  }
}

void test_stack_push_pop_peek(void) {
  Stack s;
  int value;
  stack_init(&s);
  TEST_ASSERT_TRUE(stack_push(&s, 10));
  TEST_ASSERT_TRUE(stack_peek(&s, &value));
  TEST_ASSERT_EQUAL_INT(10, value);
  TEST_ASSERT_TRUE(stack_push(&s, 20));
  TEST_ASSERT_TRUE(stack_pop(&s, &value));
  TEST_ASSERT_EQUAL_INT(20, value);
  TEST_ASSERT_TRUE(stack_peek(&s, &value));
  TEST_ASSERT_EQUAL_INT(10, value);
}

void test_bubble_sort(void) {
  int arr[5] = {5, 1, 4, 2, 8};
  int expected[5] = {1, 2, 4, 5, 8};
  bubble_sort(arr, 5);
  assert_arrays_equal(expected, arr, 5);
}

void test_insertion_sort(void) {
  int arr[6] = {9, 3, 7, 1, 4, 2};
  int expected[6] = {1, 2, 3, 4, 7, 9};
  insertion_sort(arr, 6);
  assert_arrays_equal(expected, arr, 6);
}

void test_selection_sort(void) {
  int arr[5] = {10, -2, 7, 7, 3};
  int expected[5] = {-2, 3, 7, 7, 10};
  selection_sort(arr, 5);
  assert_arrays_equal(expected, arr, 5);
}

void test_merge_sort(void) {
  int arr[7] = {8, 5, 2, 9, 5, 6, 3};
  int expected[7] = {2, 3, 5, 5, 6, 8, 9};
  merge_sort(arr, 7);
  assert_arrays_equal(expected, arr, 7);
}

void test_quick_sort(void) {
  int arr[6] = {4, 1, 3, 9, 7, 2};
  int expected[6] = {1, 2, 3, 4, 7, 9};
  quick_sort(arr, 6);
  assert_arrays_equal(expected, arr, 6);
}

void test_simple_memcpy(void) {
  char source[] = "memory";
  char destination[16] = {0};

  TEST_ASSERT_EQUAL_PTR(destination,
                        simple_memcpy(destination, source, sizeof(source)));
  TEST_ASSERT_EQUAL_STRING(source, destination);
}

void test_simple_memset(void) {
  char buffer[8] = "abcdefg";

  TEST_ASSERT_EQUAL_PTR(buffer, simple_memset(buffer, 'x', 3));
  TEST_ASSERT_EQUAL_CHAR('x', buffer[0]);
  TEST_ASSERT_EQUAL_CHAR('x', buffer[1]);
  TEST_ASSERT_EQUAL_CHAR('x', buffer[2]);
  TEST_ASSERT_EQUAL_STRING("xxxdefg", buffer);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_stack_push_pop_peek);
  RUN_TEST(test_bubble_sort);
  RUN_TEST(test_insertion_sort);
  RUN_TEST(test_selection_sort);
  RUN_TEST(test_merge_sort);
  RUN_TEST(test_quick_sort);
  RUN_TEST(test_simple_memcpy);
  RUN_TEST(test_simple_memset);
  return UNITY_END();
}
