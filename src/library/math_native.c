#include "math_native.h"
#include <math.h>

static inline void checkArgCount(int expected, int actual) {
  if (expected != actual) {
    runtimeError("Expected %d argument(s) but received %d",
                 expected,
                 actual);
  }
}

void defineMathFunctions() {
  defineNative("sqrt", sqrtNative);
  defineNative("pow", powNative);
  defineNative("sin", sinNative);
}

Value sqrtNative(int argCount, Value* args) {
  checkArgCount(1, argCount);
  return NUMBER_VAL(sqrt(AS_NUMBER(args[0])));
}

Value powNative(int argCount, Value* args) {
  checkArgCount(2, argCount);
  return NUMBER_VAL(pow(AS_NUMBER(args[0]), AS_NUMBER(args[1])));
}

Value sinNative(int argCount, Value* args) {
  checkArgCount(1, argCount);
  return NUMBER_VAL(sin(AS_NUMBER(args[0])));
}
