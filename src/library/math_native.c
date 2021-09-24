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
  defineNative("log", logNative);
  defineNative("log10", log10Native);
  defineNative("log2", log2Native);
  defineNative("sin", sinNative);
  defineNative("cos", cosNative);
  defineNative("tan", tanNative);
}

Value sqrtNative(int argCount, Value* args) {
  checkArgCount(1, argCount);
  return NUMBER_VAL(sqrt(AS_NUMBER(args[0])));
}

Value powNative(int argCount, Value* args) {
  checkArgCount(2, argCount);
  return NUMBER_VAL(pow(AS_NUMBER(args[0]), AS_NUMBER(args[1])));
}

Value logNative(int argCount, Value* args) {
  checkArgCount(1, argCount);
  return NUMBER_VAL(log(AS_NUMBER(args[0])));
}

Value log10Native(int argCount, Value* args) {
  checkArgCount(1, argCount);
  return NUMBER_VAL(log10(AS_NUMBER(args[0])));
}

Value log2Native(int argCount, Value* args) {
  checkArgCount(1, argCount);
  return NUMBER_VAL(log2(AS_NUMBER(args[0])));
}

Value sinNative(int argCount, Value* args) {
  checkArgCount(1, argCount);
  return NUMBER_VAL(sin(AS_NUMBER(args[0])));
}

Value cosNative(int argCount, Value* args) {
  checkArgCount(1, argCount);
  return NUMBER_VAL(cos(AS_NUMBER(args[0])));
}

Value tanNative(int argCount, Value* args) {
  checkArgCount(1, argCount);
  return NUMBER_VAL(tan(AS_NUMBER(args[0])));
}
