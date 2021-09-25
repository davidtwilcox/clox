#include "common_library.h"

void checkArgCount(int expected, int actual) {
  if (expected != actual) {
    runtimeError("Expected %d argument(s) but received %d",
                 expected,
                 actual);
  }
}
