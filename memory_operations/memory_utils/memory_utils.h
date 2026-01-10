#ifndef MEMORY_UTILS_H
#define MEMORY_UTILS_H

#include <stddef.h>

void *simple_memcpy(void *destination, const void *source, size_t size);
void *simple_memset(void *buffer, int value, size_t size);

#endif
