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

See [`memory_utils.c`](./memory_utils.c) for a small implementation and comparison with the standard library.

#### Exercise

Modify the example to add a `simple_memcmp` and compare the output to `memcmp`.
