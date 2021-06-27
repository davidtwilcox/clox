#include "testchunk.h"

#include "../src/chunk.h"
#include "../src/value.h"
#include "../src/vm.h"

#include "unity.h"

void setUp_chunk_tests() {
  initVM();
}

void tearDown_chunk_tests() {
  freeVM();
}

void test_initchunk_should_zero_values(void) {
  Chunk chunk;
  initChunk(&chunk);

  TEST_ASSERT_TRUE(chunk.count == 0);
  TEST_ASSERT_TRUE(chunk.capacity == 0);
  TEST_ASSERT_TRUE(chunk.code == NULL);
  TEST_ASSERT_TRUE(chunk.lines == NULL);

  TEST_ASSERT_TRUE(chunk.constants.count == 0);
  TEST_ASSERT_TRUE(chunk.constants.capacity == 0);
  TEST_ASSERT_TRUE(chunk.constants.values == NULL);

  freeChunk(&chunk);
}

void test_addconstant_should_return_index(void) {
  Chunk chunk;
  initChunk(&chunk);

  int actual = addConstant(&chunk, BOOL_VAL(true));
  TEST_ASSERT_TRUE(actual == 0);

  actual = addConstant(&chunk, FALSE_VAL);
  TEST_ASSERT_TRUE(actual == 1);

  actual = addConstant(&chunk, TRUE_VAL);
  TEST_ASSERT_TRUE(actual == 2);

  actual = addConstant(&chunk, NIL_VAL);
  TEST_ASSERT_TRUE(actual == 3);

  actual = addConstant(&chunk, NUMBER_VAL(12.0));
  TEST_ASSERT_TRUE(actual == 4);

  char* obj = "Hello, world!";
  actual = addConstant(&chunk, OBJ_VAL(obj));
  TEST_ASSERT_TRUE(actual == 5);

  freeChunk(&chunk);
}

void test_writechunk_should_add_byte_and_line(void) {
  Chunk chunk;
  initChunk(&chunk);

  uint8_t expectedByte = OP_RETURN;
  int expectedLineNumber = 4;
  writeChunk(&chunk, expectedByte, expectedLineNumber);
  TEST_ASSERT_TRUE(chunk.code[0] == expectedByte);
  TEST_ASSERT_TRUE(chunk.lines[0] == expectedLineNumber);

  expectedByte = OP_GET_LOCAL;
  expectedLineNumber = 13;
  writeChunk(&chunk, expectedByte, expectedLineNumber);
  TEST_ASSERT_TRUE(chunk.code[1] == expectedByte);
  TEST_ASSERT_TRUE(chunk.lines[1] == expectedLineNumber);

  freeChunk(&chunk);
}

void test_freechunk_should_clear_chunk_memory(void) {
  Chunk chunk;
  initChunk(&chunk);
  freeChunk(&chunk);

  TEST_ASSERT_TRUE(chunk.count == 0);
  TEST_ASSERT_TRUE(chunk.capacity == 0);
  TEST_ASSERT_TRUE(chunk.code == NULL);
  TEST_ASSERT_TRUE(chunk.lines == NULL);

  TEST_ASSERT_TRUE(chunk.constants.count == 0);
  TEST_ASSERT_TRUE(chunk.constants.capacity == 0);
  TEST_ASSERT_TRUE(chunk.constants.values == NULL);
}

void run_chunk_tests() {
  printf("==== Starting <Chunk> tests ====\n");

  setUp_chunk_tests();

  RUN_TEST(test_initchunk_should_zero_values);
  RUN_TEST(test_addconstant_should_return_index);
  RUN_TEST(test_writechunk_should_add_byte_and_line);
  RUN_TEST(test_freechunk_should_clear_chunk_memory);

  tearDown_chunk_tests();

  printf("==== Finished <Chunk> tests ====\n");
}
