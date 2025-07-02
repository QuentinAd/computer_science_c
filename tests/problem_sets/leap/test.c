#include "../../../../Unity/src/unity.h"
#include "../../../problem_sets/leap/leap.h"

// Optional hooks for setup and teardown (can be left empty if not needed)
void setUp(void) {}
void tearDown(void) {}

void test_leap_year() {
    TEST_ASSERT_TRUE(is_leap_year(2000));
    TEST_ASSERT_FALSE(is_leap_year(1900));
    TEST_ASSERT_TRUE(is_leap_year(2024));
    TEST_ASSERT_FALSE(is_leap_year(2023));
}

void test_edge_cases() {
    TEST_ASSERT_TRUE(is_leap_year(2400));
    TEST_ASSERT_FALSE(is_leap_year(2100));
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_leap_year);
    RUN_TEST(test_edge_cases);
    return UNITY_END();
}
