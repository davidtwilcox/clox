#include "testchunk.h"
#include "testvalue.h"
#include "testtable.h"

#include "unity.h"

void setUp() {}

void tearDown() {}

int main(void) {
  UNITY_BEGIN();
  run_chunk_tests();
  run_value_tests();
  run_table_tests();
  return UNITY_END();
}
