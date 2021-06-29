#include "testvalue.h"

#include "../src/value.h"
#include "../src/vm.h"

#include "unity.h"

void setUp_value_tests() {
}

void tearDown_value_tests() {
}

void test_initvaluearray_should_zero_values(void) {
  ValueArray array;
  initValueArray(&array);
  TEST_ASSERT_TRUE(array.count == 0);
  TEST_ASSERT_TRUE(array.capacity == 0);
  TEST_ASSERT_TRUE(array.values == NULL);
  freeValueArray(&array);
}

void test_writevaluearray_should_add_value_to_array(void) {
  ValueArray array;
  initValueArray(&array);

  bool expected1 = true;
  writeValueArray(&array, BOOL_VAL(expected1));
  TEST_ASSERT_TRUE(array.count == 1);
  TEST_ASSERT_TRUE(array.capacity >= 1);
  TEST_ASSERT_TRUE(AS_BOOL(array.values[0]) == expected1);

  double expected2 = 12.3;
  writeValueArray(&array, NUMBER_VAL(expected2));
  TEST_ASSERT_TRUE(array.count == 2);
  TEST_ASSERT_TRUE(array.capacity >= 2);
  TEST_ASSERT_TRUE(AS_NUMBER(array.values[1]) == expected2);

  char* expected3 = "Hello, world";
  size_t expectedLength = strlen(expected3);
  writeValueArray(&array, OBJ_VAL(expected3));
  TEST_ASSERT_TRUE(array.count == 3);
  TEST_ASSERT_TRUE(array.capacity >= 3);
  TEST_ASSERT_TRUE(memcmp(AS_OBJ(array.values[2]),
                          expected3, expectedLength) == 0);

  freeValueArray(&array);
}

void test_freevaluearray_should_zero_values(void) {
  ValueArray array;
  initValueArray(&array);
  freeValueArray(&array);
  TEST_ASSERT_TRUE(array.count == 0);
  TEST_ASSERT_TRUE(array.capacity == 0);
  TEST_ASSERT_TRUE(array.values == NULL);
}

void test_valuesequal_should_evaluate_correctly(void) {
  Value num1 = NUMBER_VAL(12.3);
  Value num2 = NUMBER_VAL(12.3);
  Value num3 = NUMBER_VAL(87.9);
  TEST_ASSERT_TRUE(valuesEqual(num1, num2));
  TEST_ASSERT_FALSE(valuesEqual(num1, num3));

  Value bool1 = BOOL_VAL(true);
  Value bool2 = BOOL_VAL(true);
  Value bool3 = BOOL_VAL(false);
  TEST_ASSERT_TRUE(valuesEqual(bool1, bool2));
  TEST_ASSERT_FALSE(valuesEqual(bool1, bool3));

  char* hello1 = "Hello";
  char* hello2 = "Hello";
  char* world = "World";
  Value str1 = OBJ_VAL(hello1);
  Value str2 = OBJ_VAL(hello1);
  Value str3 = OBJ_VAL(world);
  Value str4 = OBJ_VAL(hello2);
  TEST_ASSERT_TRUE(valuesEqual(str1, str2));
  TEST_ASSERT_FALSE(valuesEqual(str1, str3));
  // Because the compiler normally uses string interning,
  // valuesEqual is expected to return false if objects are not
  // the same pointer, even if values are equal
  TEST_ASSERT_FALSE(valuesEqual(str1, str4));
}

void run_value_tests() {
  printf("==== Starting <Value> tests ====\n");

  setUp_value_tests();

  RUN_TEST(test_initvaluearray_should_zero_values);
  RUN_TEST(test_writevaluearray_should_add_value_to_array);
  RUN_TEST(test_freevaluearray_should_zero_values);
  RUN_TEST(test_valuesequal_should_evaluate_correctly);

  tearDown_value_tests();

  printf("==== Finished <Value> tests ====\n");
}
