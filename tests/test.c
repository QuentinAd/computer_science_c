#include "../../Unity/src/unity.h"
#include "stack.h"
#include "sort.h"

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

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_stack_push_pop_peek);
    RUN_TEST(test_bubble_sort);
    return UNITY_END();
}
