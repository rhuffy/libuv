#include "uv.h"
#include "internal.h"

#include "string.h"

int uv_exepath(char* buffer, size_t* size) {
  strcpy(buffer, "julia");
  *size = strlen(buffer);
  return 0;
}

uint64_t uv_get_available_memory(void) {
  return 10000000;
}

uint64_t uv_get_free_memory(void) {
  return 10000000;
}

uint64_t uv_get_total_memory(void) {
  return 10000000;
}

void uv_loadavg(double avg[3]) {
  /* Can't be implemented */
  avg[0] = avg[1] = avg[2] = 0;
}
