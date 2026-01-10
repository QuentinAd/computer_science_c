#include <stdio.h>
#include <string.h>

#include "memory_utils.h"

int main(void) {
  char message[] = "memory";
  char copy[16] = {0};

  simple_memcpy(copy, message, strlen(message) + 1);
  printf("simple_memcpy -> %s\n", copy);

  simple_memset(copy, '*', 3);
  printf("simple_memset -> %s\n", copy);

  return 0;
}
