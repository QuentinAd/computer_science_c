< [Home](/README.md)

### Bitwise Operators

> Bitwise operators act on the binary representation of integers for low-level manipulation.

#### Operators

- AND: `&`
- OR: `|`
- XOR: `^`
- NOT: `~`
- Left shift: `<<`
- Right shift: `>>`

```c
unsigned int flags = 0;
flags |= (1u << 2);  // set bit 2
flags &= ~(1u << 2); // clear bit 2
```

#### Example

See [`bitwise_operators.c`](./bitwise_operators.c) for a small flag-based example.

#### Safety notes

- Prefer unsigned integers for shifting to avoid undefined behavior with sign bits.
- Keep shifts within the bit width of the type to avoid undefined results.

#### Exercise

Extend the example to add a flag for "is_admin" and print its status.
