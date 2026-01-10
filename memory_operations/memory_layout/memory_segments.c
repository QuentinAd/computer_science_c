#include <stdio.h>
#include <stdlib.h>

int global_counter = 7;
static int static_counter = 42;

int main(void) {
  int local_value = 9;
  int *heap_value = malloc(sizeof(int));

  if (!heap_value) {
    fprintf(stderr, "Allocation failed.\n");
    return 1;
  }

  *heap_value = 15;

  printf("Addresses for different storage durations:\n\n");
  printf("global_counter: %p\n", (void *)&global_counter);
  printf("static_counter: %p\n", (void *)&static_counter);
  printf("local_value:   %p\n", (void *)&local_value);
  printf("heap_value:    %p\n", (void *)heap_value);

  free(heap_value);
  return 0;
}
