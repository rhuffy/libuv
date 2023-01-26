#include "uv.h"
#include "internal.h"

#include "string.h"

#include "emscripten.h"


int uv_exepath(char* buffer, size_t* size) {
  strcpy(buffer, "");
  *size = strlen(buffer);
  return 0;
}

uint64_t uv_get_available_memory(void) {
  return uv_get_free_memory();
}

uint64_t uv_get_free_memory(void) {
  return uv_get_total_memory() - EM_ASM_INT({ return HEAP8.length });
}

uint64_t uv_get_total_memory(void) {
  return return EM_ASM_INT({ return MAXIMUM_MEMORY });;
}

void uv_loadavg(double avg[3]) {
  /* Can't be implemented */
  avg[0] = avg[1] = avg[2] = 0;
}
