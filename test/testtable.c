#include "testtable.h"

#include "../src/table.h"

#include "unity.h"

void setUp_table_tests() {
}

void tearDown_table_tests() {
}

void test_inittable_should_zero_values(void) {
  Table table;
  initTable(&table);

  TEST_ASSERT_TRUE(table.count == 0);
  TEST_ASSERT_TRUE(table.capacity == 0);
  TEST_ASSERT_TRUE(table.entries == NULL);

  freeTable(&table);
}

void run_table_tests() {
  printf("==== Starting <Table> tests ====\n");

  setUp_table_tests();

  RUN_TEST(test_inittable_should_zero_values);

  tearDown_table_tests();

  printf("==== Finished <Table> tests ====\n");
}
