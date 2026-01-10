#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int parse_port(const char *text, int *out_port) {
  char *end = NULL;
  long value = 0;

  if (!text || !out_port) {
    errno = EINVAL;
    return -1;
  }

  errno = 0;
  value = strtol(text, &end, 10);

  if (errno != 0 || end == text || *end != '\0') {
    errno = EINVAL;
    return -1;
  }

  if (value < 0 || value > INT_MAX) {
    errno = ERANGE;
    return -1;
  }

  *out_port = (int)value;
  return 0;
}

int main(void) {
  int port = 0;

  if (parse_port("8080", &port) == 0) {
    printf("Parsed port: %d\n", port);
  } else {
    perror("Failed to parse port");
  }

  return 0;
}
