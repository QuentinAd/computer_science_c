< [Home](/README.md)

### Pointer Arithmetic

> Pointer arithmetic lets you move through memory in steps sized by the type the pointer refers to.

When you add `1` to an `int *`, the address increases by `sizeof(int)` bytes. The same rule applies for subtraction.

```c
int values[] = {10, 20, 30, 40};
int *cursor = values;

printf("%p -> %d\n", (void *)cursor, *cursor);

cursor++;
printf("%p -> %d\n", (void *)cursor, *cursor);
```

#### Example

See [`pointer_walk.c`](./pointer_walk.c) for a full walkthrough that prints the addresses and values of an array.

#### Exercise

Change the `step` value inside the loop to `2` or `3`. Observe how the pointer jumps across the array.
