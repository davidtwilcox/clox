#include <stdlib.h>

#include "memory.h"
#include "vm.h"

// Reallocates memory for code chunks. Operations determined by oldSize / newSize
// parameter values:
// oldSize   newSize               Operation
// =======   =======               =========
// 0         Non-zero              Allocate new block
// Non-zero  0                     Free allocation
// Non-zero  Smaller than oldSize  Shrink existing allocation
// Non-zero  Larger than oldSize   Grow existing allocation
void* reallocate(void* pointer, size_t oldSize, size_t newSize) {
  if (newSize == 0) {
    free(pointer);
    return NULL;
  }

  void* result = realloc(pointer, newSize);
  if (result == NULL) exit(1);
  return result;
}

static void freeObject(Obj* object) {
  switch (object->type) {
  case OBJ_STRING: {
    ObjString* string = (ObjString*)object;
    FREE_ARRAY(char, string->chars, string->length + 1);
    FREE(ObjString, object);
    break;
  }
  }
}

void freeObjects() {
  Obj* object = vm.objects;
  while (object != NULL) {
    Obj* next = object->next;
    freeObject(object);
    object = next;
  }
}
