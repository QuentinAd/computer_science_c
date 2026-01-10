#include "memory_utils.h"

void *simple_memcpy(void *destination, const void *source, size_t size) {
  unsigned char *dest_bytes = destination;
  const unsigned char *src_bytes = source;

  for (size_t i = 0; i < size; ++i) {
    dest_bytes[i] = src_bytes[i];
  }

  return destination;
}

void *simple_memset(void *buffer, int value, size_t size) {
  unsigned char *bytes = buffer;

  for (size_t i = 0; i < size; ++i) {
    bytes[i] = (unsigned char)value;
  }

  return buffer;
}
