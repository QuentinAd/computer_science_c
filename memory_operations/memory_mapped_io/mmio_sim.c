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

int main(void) {
  const char *path = "mmio_sim.bin";
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
  enum { REG_CONTROL = 0, REG_STATUS = 1, REG_DATA = 2, REG_RESULT = 3 };

  regs[REG_CONTROL] = 0x1;
  regs[REG_STATUS] = 0x0;
  regs[REG_DATA] = 0x2;
  regs[REG_RESULT] = regs[REG_DATA] * 4;
  regs[REG_STATUS] = 0xA5;

  printf("CONTROL=0x%08" PRIx32 "\n", regs[REG_CONTROL]);
  printf("STATUS=0x%08" PRIx32 "\n", regs[REG_STATUS]);
  printf("DATA=0x%08" PRIx32 "\n", regs[REG_DATA]);
  printf("RESULT=0x%08" PRIx32 "\n", regs[REG_RESULT]);

  if (msync((void *)regs, map_size, MS_SYNC) != 0) {
    fprintf(stderr, "msync failed: %s\n", strerror(errno));
  }

  if (munmap(mapping, map_size) != 0) {
    fprintf(stderr, "munmap failed: %s\n", strerror(errno));
  }

  close(fd);
  return 0;
}
