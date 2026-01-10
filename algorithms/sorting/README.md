< [Home](/README.md)

# Sorting Algorithms

This directory contains sorting algorithm implementations with small runnable demos.

## Bubble Sort

`bubble_sort.c` demonstrates the Bubble Sort algorithm. It repeatedly compares adjacent elements and swaps them if they are in the wrong order. The worst-case complexity is `O(n^2)`.

## Insertion Sort

`insertion_sort.c` shows Insertion Sort, which builds a sorted prefix one element at a time. It performs well on nearly sorted data.

## Selection Sort

`selection_sort.c` highlights Selection Sort, which repeatedly selects the minimum element and places it at the front.

## Merge Sort

`merge_sort.c` uses a divide-and-conquer strategy with extra memory to achieve `O(n log n)` performance.

## Quick Sort

`quick_sort.c` uses partitioning around a pivot to sort in-place with average `O(n log n)` performance.

### Compile and run

```bash
clang bubble_sort.c -o bubble_sort && ./bubble_sort
clang insertion_sort.c -o insertion_sort && ./insertion_sort
clang selection_sort.c -o selection_sort && ./selection_sort
clang merge_sort.c -o merge_sort && ./merge_sort
clang quick_sort.c -o quick_sort && ./quick_sort
```

#### Safety notes

- Recursive algorithms (merge/quick sort) can hit recursion limits on very large inputs.
- Merge sort allocates temporary memory; check allocations in production code.

#### Exercise

Add a comparison counter to each implementation and print the number of comparisons for the same input array.
