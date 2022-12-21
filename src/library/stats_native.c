#include "stats_native.h"

void defineStatsFunctions() {
  defineNative("average", averageNative);
}

Value averageNative(int argCount, Value* args) {
  double mean = 0.0;
  int count = 1;
  for (int i = 0; i < argCount; i++) {
    double value = AS_NUMBER(args[i]);
    double diff = (value - mean) / count;
    mean = mean + diff;
    count++;
  }

  return NUMBER_VAL(mean);
}
