#include "../../Unity/src/unity.h"
#include "../memory_operations/memory_utils/memory_utils.h"
#include "sort.h"
#include "stack.h"

#include <string.h>

void setUp(void) {}
void tearDown(void) {}

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
  bubble_sort(arr, 5);
  int expected[5] = {1, 2, 4, 5, 8};
  for (int i = 0; i < 5; ++i) {
    TEST_ASSERT_EQUAL_INT(expected[i], arr[i]);
  }
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
  RUN_TEST(test_simple_memcpy);
  RUN_TEST(test_simple_memset);
  return UNITY_END();
}
