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

#### Examples

See [`pointer_walk.c`](./pointer_walk.c) for a full walkthrough that prints the addresses and values of an array.
Use [`pointer_stride.c`](./pointer_stride.c) to see how stepping by a stride changes which elements you visit.

#### Exercise

Change the `step` value inside `pointer_stride.c` to `1`, `2`, or `3`. Then change the starting index in the loop to
begin at `1` and compare the addresses printed in each run.
