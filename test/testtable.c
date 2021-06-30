#include "testtable.h"

#include "../src/table.h"
#include "../src/value.h"
#include "../src/object.h"

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

void test_freetable_should_zero_values(void) {
  Table table;
  initTable(&table);
  freeTable(&table);

  TEST_ASSERT_TRUE(table.count == 0);
  TEST_ASSERT_TRUE(table.capacity == 0);
  TEST_ASSERT_TRUE(table.entries == NULL);
}

void test_table_set_get_should_assign_retrieve_values(void) {
  Table table;
  initTable(&table);

  ObjString* key = takeString("key", 3);
  Value expected = NUMBER_VAL(12.3);
  TEST_ASSERT_TRUE(tableSet(&table, key, expected));
  Value actual;
  TEST_ASSERT_TRUE(tableGet(&table, key, &actual));
  TEST_ASSERT_TRUE(valuesEqual(actual, expected));

  freeTable(&table);
}

void test_tabledelete_should_remove_existing_key(void) {
  Table table;
  initTable(&table);

  ObjString* key = copyString("key", 3);
  Value expected = NUMBER_VAL(12.3);
  TEST_ASSERT_TRUE(tableSet(&table, key, expected));
  TEST_ASSERT_TRUE(tableDelete(&table, key));
  Value actual;
  TEST_ASSERT_FALSE(tableGet(&table, key, &actual));

  freeTable(&table);
}

void test_tabledelete_should_fail_to_remove_nonexistent_key(void) {
  Table table;
  initTable(&table);

  ObjString* key = copyString("key", 3);
  TEST_ASSERT_FALSE(tableDelete(&table, key));

  freeTable(&table);
}

void test_tableaddall_should_copy_table(void) {
  Table table1;
  initTable(&table1);

  ObjString* key1 = copyString("key1", 4);
  Value expected1 = NUMBER_VAL(12.3);
  TEST_ASSERT_TRUE(tableSet(&table1, key1, expected1));
  ObjString* key2 = copyString("key2", 4);
  Value expected2 = NUMBER_VAL(87.9);
  TEST_ASSERT_TRUE(tableSet(&table1, key2, expected2));

  Table table2;
  initTable(&table2);
  tableAddAll(&table1, &table2);

  TEST_ASSERT_TRUE(table2.count == 2);
  TEST_ASSERT_TRUE(table2.capacity >= 2);
  Value actual1;
  TEST_ASSERT_TRUE(tableGet(&table2, key1, &actual1));
  TEST_ASSERT_TRUE(valuesEqual(actual1, expected1));
  Value actual2;
  TEST_ASSERT_TRUE(tableGet(&table2, key2, &actual2));
  TEST_ASSERT_TRUE(valuesEqual(actual2, expected2));

  freeTable(&table1);
  freeTable(&table2);
}

void test_tablefindstring_should_find_existing_string(void) {
  Table table;
  initTable(&table);

  char* key = "key";
  int len = 3;
  ObjString* keyStr = copyString(key, len);
  Value value = NUMBER_VAL(12.3);
  TEST_ASSERT_TRUE(tableSet(&table, keyStr, value));

  uint32_t hash = hashString(key, len);
  TEST_ASSERT_TRUE(tableFindString(&table, key, len, hash));

  freeTable(&table);
}

void test_tablefindstring_should_fail_to_find_nonexistent_string(void) {
  Table table;
  initTable(&table);

  char* key = "key";
  int len = 3;
  uint32_t hash = hashString(key, len);
  TEST_ASSERT_FALSE(tableFindString(&table, key, len, hash));

  freeTable(&table);
}

void run_table_tests() {
  printf("==== Starting <Table> tests ====\n");

  setUp_table_tests();

  RUN_TEST(test_inittable_should_zero_values);
  RUN_TEST(test_freetable_should_zero_values);
  RUN_TEST(test_table_set_get_should_assign_retrieve_values);
  RUN_TEST(test_tabledelete_should_remove_existing_key);
  RUN_TEST(test_tabledelete_should_fail_to_remove_nonexistent_key);
  RUN_TEST(test_tableaddall_should_copy_table);
  RUN_TEST(test_tablefindstring_should_find_existing_string);
  RUN_TEST(test_tablefindstring_should_fail_to_find_nonexistent_string);

  tearDown_table_tests();

  printf("==== Finished <Table> tests ====\n");
}
