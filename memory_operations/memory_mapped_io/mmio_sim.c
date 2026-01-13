#define _POSIX_C_SOURCE 200809L

#include <errno.h>
#include <fcntl.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>

enum {
  GPIO_ENABLE = 0,
  GPIO_DIR = 1,
  GPIO_OUT = 2,
  GPIO_IN = 3,
  GPIO_REG_COUNT = 4
};

static void print_gpio_state(const volatile uint32_t *regs) {
  printf("ENABLE=0x%08" PRIx32 "\n", regs[GPIO_ENABLE]);
  printf("DIR   =0x%08" PRIx32 "\n", regs[GPIO_DIR]);
  printf("OUT   =0x%08" PRIx32 "\n", regs[GPIO_OUT]);
  printf("IN    =0x%08" PRIx32 "\n", regs[GPIO_IN]);
}

int main(void) {
  const char *path = "mmio_gpio.bin";
  const size_t map_size = 4096;
  int fd = open(path, O_RDWR | O_CREAT | O_TRUNC, 0644);
  if (fd < 0) {
    fprintf(stderr, "open failed: %s\n", strerror(errno));
    return 1;
  }

  if (ftruncate(fd, (off_t)map_size) != 0) {
    fprintf(stderr, "ftruncate failed: %s\n", strerror(errno));
    close(fd);
    return 1;
  }

  void *mapping =
      mmap(NULL, map_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
  if (mapping == MAP_FAILED) {
    fprintf(stderr, "mmap failed: %s\n", strerror(errno));
    close(fd);
    return 1;
  }

  volatile uint32_t *regs = (volatile uint32_t *)mapping;
  regs[GPIO_ENABLE] = 0x1;
  regs[GPIO_DIR] = 0x0F;
  regs[GPIO_OUT] = 0x05;
  regs[GPIO_IN] = regs[GPIO_OUT] & regs[GPIO_DIR];

  puts("Initial GPIO state:");
  print_gpio_state(regs);

  regs[GPIO_OUT] ^= 0x02;
  regs[GPIO_IN] = regs[GPIO_OUT] & regs[GPIO_DIR];

  puts("\nAfter toggling pin 1:");
  print_gpio_state(regs);

  regs[GPIO_ENABLE] = 0x0;

  if (msync((void *)regs, map_size, MS_SYNC) != 0) {
    fprintf(stderr, "msync failed: %s\n", strerror(errno));
  }

  if (munmap(mapping, map_size) != 0) {
    fprintf(stderr, "munmap failed: %s\n", strerror(errno));
  }

  close(fd);
  return 0;
}
