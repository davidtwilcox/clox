#include "testvm.h"

#include "../src/vm.h"

#include "unity.h"

void setUp_vm_tests() {
}

void tearDown_vm_tests() {
}

void test_initvm_should_set_sane_values(void) {
  initVM();

  TEST_ASSERT_TRUE(vm.nextGC == INIT_NEXT_GC);
  TEST_ASSERT_TRUE(vm.grayCount == 0);
  TEST_ASSERT_TRUE(vm.grayCapacity == 0);
  TEST_ASSERT_TRUE(vm.grayStack == NULL);
  TEST_ASSERT_TRUE(memcmp(vm.initString->chars, "init", 4) == 0);

  freeVM();
}

void test_freevm_should_clear_values(void) {
  initVM();
  freeVM();

  TEST_ASSERT_TRUE(vm.bytesAllocated == 0);
  TEST_ASSERT_TRUE(vm.nextGC == INIT_NEXT_GC);
  TEST_ASSERT_TRUE(vm.globals.count == 0);
  TEST_ASSERT_TRUE(vm.globals.capacity == 0);
  TEST_ASSERT_TRUE(vm.globals.entries == NULL);
  TEST_ASSERT_TRUE(vm.grayCount == 0);
  TEST_ASSERT_TRUE(vm.grayCapacity == 0);
  TEST_ASSERT_TRUE(vm.grayStack == NULL);
  TEST_ASSERT_TRUE(vm.initString == NULL);
}

void test_push_pop_should_add_remove_values_from_stack(void) {
  initVM();

  Value expected1 = NUMBER_VAL(12.3);
  push(expected1);
  TEST_ASSERT_TRUE(valuesEqual(vm.stack[0], expected1));

  Value expected2 = NUMBER_VAL(87.9);
  push(expected2);
  TEST_ASSERT_TRUE(valuesEqual(vm.stack[1], expected2));

  Value actual = pop();
  TEST_ASSERT_TRUE(valuesEqual(actual, expected2));
  // Is the value one back from the stack top the first value pushed?22222
  TEST_ASSERT_TRUE(valuesEqual(*(vm.stackTop - 1), expected1));

  freeVM();
}

void run_vm_tests() {
  printf("==== Starting <VM> tests ====\n");

  setUp_vm_tests();

  RUN_TEST(test_initvm_should_set_sane_values);
  RUN_TEST(test_freevm_should_clear_values);
  RUN_TEST(test_push_pop_should_add_remove_values_from_stack);

  tearDown_vm_tests();

  printf("==== Finished <VM> tests ====\n");
}
