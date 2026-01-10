< [Home](/README.md)

### Dynamic Memory

> Dynamic memory is allocated on the heap at runtime using `malloc`, `calloc`, or `realloc` and released with `free`.

- **Stack** memory is managed automatically (local variables).
- **Heap** memory is controlled manually (dynamic allocations).

```c
int *numbers = malloc(count * sizeof(int));
if (!numbers) {
    return 1;
}

free(numbers);
```

#### Example

See [`dynamic_array.c`](./dynamic_array.c) for a program that allocates an array based on a size argument,
initializes it, prints values, and releases the memory.

#### Exercise

Update the example to use `realloc` and grow the array after the initial allocation.
