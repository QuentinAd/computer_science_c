#include <stdbool.h>
#include <stdio.h>

#define FLAG_ACTIVE (1u << 0)
#define FLAG_VERIFIED (1u << 1)
#define FLAG_SUBSCRIBER (1u << 2)

static bool has_flag(unsigned int flags, unsigned int flag) {
  return (flags & flag) != 0u;
}

int main(void) {
  unsigned int flags = 0u;

  flags |= FLAG_ACTIVE;
  flags |= FLAG_SUBSCRIBER;

  printf("Active: %s\n", has_flag(flags, FLAG_ACTIVE) ? "yes" : "no");
  printf("Verified: %s\n", has_flag(flags, FLAG_VERIFIED) ? "yes" : "no");
  printf("Subscriber: %s\n", has_flag(flags, FLAG_SUBSCRIBER) ? "yes" : "no");

  flags &= ~FLAG_SUBSCRIBER;
  printf("Subscriber after removal: %s\n",
         has_flag(flags, FLAG_SUBSCRIBER) ? "yes" : "no");

  return 0;
}
