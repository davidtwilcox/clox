#pragma once

#include "common_library.h"

void defineMathFunctions();

Value sqrtNative(int argCount, Value* args);
Value powNative(int argCount, Value* args);
Value sinNative(int argCount, Value* args);
