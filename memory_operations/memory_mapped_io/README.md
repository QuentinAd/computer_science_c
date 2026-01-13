< [Home](/README.md)

### Memory-Mapped I/O (MMIO)

> Memory-mapped I/O exposes device registers as memory addresses. In user space you can simulate the same idea by mapping a file into memory and treating its bytes like hardware registers.

```c
volatile uint32_t *regs = (volatile uint32_t *)mapping;
regs[0] = 0x1;   // control register
regs[1] = 0x2;   // data register
```

#### Example: GPIO-style peripheral

See [`mmio_sim.c`](./mmio_sim.c) for a simulated GPIO peripheral. It maps a small file into memory and treats 32-bit words as GPIO registers:

- `GPIO_ENABLE`: turn the peripheral on/off.
- `GPIO_DIR`: set pins as input/output.
- `GPIO_OUT`: write pin states.
- `GPIO_IN`: read pin states.

Try running the program in one terminal and, in another terminal, watch the backing file change with `hexdump -C mmio_gpio.bin` to see the real-time writes.

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

Extend the simulator to toggle an extra pin every loop iteration, then read it back via `GPIO_IN` and print the observed state.
