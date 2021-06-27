#include <stddef.h>

#include "testchunk.h"

#include "unity.h"

void setUp() {}

void tearDown() {}

int main(void) {
  UNITY_BEGIN();
  run_chunk_tests();
  return UNITY_END();
}
