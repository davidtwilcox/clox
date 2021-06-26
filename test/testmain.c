#include <stddef.h>
#include "unity.h"

void setUp(void) {}

void tearDown(void) {}

void test_should_succeed() {
  TEST_ASSERT_TRUE(1 == 1);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_should_succeed);
  return UNITY_END();
}
