#include <stddef.h>

#include "../../Unity/src/unity.h"

void *simple_memcpy(void *destination, const void *source, size_t size);
void *simple_memset(void *buffer, int value, size_t size);

void setUp(void) {}
void tearDown(void) {}

void test_simple_memcpy_copies_bytes(void) {
  char source[] = "hello";
  char destination[8] = {0};

  simple_memcpy(destination, source, sizeof(source));

  TEST_ASSERT_EQUAL_STRING(source, destination);
}

void test_simple_memset_fills_bytes(void) {
  char buffer[6] = "hello";

  simple_memset(buffer, 'x', 3);

  TEST_ASSERT_EQUAL_CHAR('x', buffer[0]);
  TEST_ASSERT_EQUAL_CHAR('x', buffer[1]);
  TEST_ASSERT_EQUAL_CHAR('x', buffer[2]);
  TEST_ASSERT_EQUAL_CHAR('l', buffer[3]);
  TEST_ASSERT_EQUAL_CHAR('o', buffer[4]);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_simple_memcpy_copies_bytes);
  RUN_TEST(test_simple_memset_fills_bytes);
  return UNITY_END();
}
