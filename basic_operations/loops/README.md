< [Home](/README.md)

### Loops (for, while, do-while)

> Loops repeat a block of code until a condition changes.

```c
for (int i = 0; i < 3; i++) {
    printf("%d\n", i);
}
```

#### Example

See [`loops_demo.c`](./loops_demo.c) for examples of `for`, `while`, and `do-while` loops.

#### Safety notes

- Ensure loop counters progress toward the exit condition to avoid infinite loops.
- Prefer `size_t` for indexing arrays when possible.

#### Exercise

Add a loop that prints only even numbers between 1 and 20.
