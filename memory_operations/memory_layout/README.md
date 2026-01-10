< [Home](/README.md)

### Memory Layout & Segments

> Different kinds of variables live in different regions of memory. You can print addresses to compare them.

- **Global/static** variables usually live in the data segment.
- **Local** variables live on the stack.
- **Dynamic** allocations live on the heap.

```c
printf("global: %p\n", (void *)&global_counter);
printf("stack: %p\n", (void *)&local_value);
printf("heap: %p\n", (void *)heap_ptr);
```

#### Example

See [`memory_segments.c`](./memory_segments.c) for a program that prints addresses of each kind of variable.

#### Exercise

Reorder the declarations or add more variables, then recompile and compare the addresses again.
