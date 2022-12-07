#include "uv.h"
#include "internal.h"

#include "string.h"

int uv_exepath(char* buffer, size_t* size) {
  strcpy(buffer, "julia");
  *size = strlen(buffer);
  return 0;
}

uint64_t uv_get_available_memory(void) {
  return uv_get_free_memory();
}
