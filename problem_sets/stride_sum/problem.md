# Pointer Stride Sum

## Introduction

Pointer arithmetic lets you move through arrays by advancing the pointer by a
fixed stride. In this exercise, you will sum every `stride`-th element of an
array using pointer arithmetic.

## Task

Write a function with the signature below:

```c
int sum_with_stride(const int *values, size_t length, size_t stride);
```

The function should return the sum of the elements at indices `0`, `stride`,
`2 * stride`, and so on while the index is less than `length`.

## Requirements

- Use pointer arithmetic instead of array indexing inside the loop.
- Return `0` when `values` is `NULL`, `length` is `0`, or `stride` is `0`.

## Example

```c
int numbers[] = {1, 2, 3, 4, 5, 6};
int result = sum_with_stride(numbers, 6, 2);
// result == 9 (1 + 3 + 5)
```
