#pragma once

#include "common_library.h"

void defineMathFunctions();

Value sqrtNative(int argCount, Value* args);
Value powNative(int argCount, Value* args);
Value logNative(int argCount, Value* args);
Value log10Native(int argCount, Value* args);
Value log2Native(int argCount, Value* args);
Value sinNative(int argCount, Value* args);
Value cosNative(int argCount, Value* args);
Value tanNative(int argCount, Value* args);
