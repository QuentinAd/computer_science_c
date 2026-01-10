#include "greeting.h"

#include <stdio.h>

void print_greeting(const char *name) {
  if (name && name[0] != '\0') {
    printf("Hello, %s!\n", name);
    return;
  }

  printf("Hello there!\n");
}
