#include "stats_native.h"

void defineStatsFunctions() {
  defineNative("average", averageNative);
}

Value averageNative(int argCount, Value* args) {
  double sum = 0.0;
  for (int i = 0; i < argCount; i++) {
    sum += AS_NUMBER(args[i]);
  }

  return NUMBER_VAL(sum / (double)argCount);
}
