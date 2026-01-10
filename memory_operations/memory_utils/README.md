< [Home](/README.md)

### Memory Utilities (Custom memcpy/memset)

> Building simplified versions of `memcpy` and `memset` helps solidify pointer arithmetic.

```c
void *simple_memset(void *buffer, int value, size_t size) {
    unsigned char *bytes = buffer;
    for (size_t i = 0; i < size; ++i) {
        bytes[i] = (unsigned char)value;
    }
    return buffer;
}
```

#### Example

See [`memory_utils_demo.c`](./memory_utils_demo.c) for a small implementation and comparison with the standard library.
The reusable functions live in [`memory_utils.c`](./memory_utils.c) with declarations in [`memory_utils.h`](./memory_utils.h).

#### Exercise

Modify the example to add a `simple_memcmp` and compare the output to `memcmp`.
