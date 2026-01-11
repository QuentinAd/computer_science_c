< [Home](/README.md)

### Memory-Mapped I/O (MMIO)

> Memory-mapped I/O exposes device registers as memory addresses. In user space you can simulate the same idea by mapping a file into memory and treating its bytes like hardware registers.

```c
volatile uint32_t *regs = (volatile uint32_t *)mapping;
regs[0] = 0x1;   // control register
regs[1] = 0x2;   // data register
```

#### Example

See [`mmio_sim.c`](./mmio_sim.c) for a simulated MMIO example that uses `mmap` on a regular file and treats a handful of 32-bit words as registers.

#### Embedded-only sketch (read with caution)

> ⚠️ Embedded MMIO touches real hardware. A wrong address or write can lock up the device. Only use hardware vendor docs and appropriate tooling.

```c
typedef struct {
    volatile uint32_t CONTROL;
    volatile uint32_t STATUS;
    volatile uint32_t DATA;
} DeviceRegisters;

#define DEVICE_BASE 0x40000000u
#define DEVICE ((DeviceRegisters *)DEVICE_BASE)

DEVICE->CONTROL = 0x1;  // enable device
```

#### Cross-platform notes

- **Linux/macOS**: use `open`, `ftruncate`, and `mmap` with `MAP_SHARED`.
- **Windows**: use `CreateFile`, `CreateFileMapping`, and `MapViewOfFile` for the same concept.

#### Exercise

Extend the simulator to add a `STATUS` register that updates whenever `DATA` changes. Print both values after each write.
