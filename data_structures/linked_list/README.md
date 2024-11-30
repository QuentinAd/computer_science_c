< [Home](/README.md)

# Linked List

## Introduction

A **Linked List** is a linear data structure where elements, known as nodes, are connected by pointers. Each node contains two parts:
1. **Data**: The value or information stored in the node.
2. **Pointer**: A reference (or address) to the next node in the sequence.

Linked lists are dynamic in nature, meaning their size can change during runtime. They are particularly useful when frequent insertions and deletions are required.

### Key Types of Linked Lists
- **Singly Linked List**: Each node points to the next node. The last node points to `NULL`.
- **Doubly Linked List**: Each node has two pointers: one to the next node and another to the previous node.
- **Circular Linked List**: The last node points back to the first node, forming a loop.

## Asymptotic Notation

| Operation                  | Singly Linked List | Doubly Linked List | Explanation                                                |
|----------------------------|--------------------|--------------------|------------------------------------------------------------|
| **Prepend (Insert at Head)** | `O(1)`             | `O(1)`             | The new node is linked at the start of the list.           |
| **Append (Insert at Tail)** | `O(n)`             | `O(1)` (with tail) | Traversal required for SLL unless a tail pointer exists.   |
| **Search**                  | `O(n)`             | `O(n)`             | Requires traversal of the list to find the element.        |
| **Deletion (By Value)**     | `O(n)`             | `O(n)`             | Traversal needed to find the element before deleting.      |
| **Deletion (By Reference)** | `O(1)`             | `O(1)`             | Direct node reference is available.                       |

### Explanation of Key Operations
1. **Prepend**: Inserting an element at the start of the list requires only updating the head pointer.
2. **Append**: In a singly linked list, the entire list must be traversed to find the last node unless a tail pointer is maintained.
3. **Search**: Traversal is required as linked lists lack random access.
4. **Deletion**:
   - By **value**: Locate the node containing the value to be deleted.
   - By **reference**: If a pointer to the node is available, unlink it directly.

## Advantages of Linked Lists
1. **Dynamic Size**: Unlike arrays, linked lists do not require a predefined size.
2. **Efficient Insertions/Deletions**: No need to shift elements, as is required with arrays.
3. **Memory Utilization**: Memory is allocated as needed during runtime.

## Disadvantages of Linked Lists
1. **Sequential Access**: Cannot perform direct access like arrays.
2. **Overhead**: Requires extra memory for pointers and adds complexity.

## Example Code

1. [Singly Linked List](/data_structures/linked_list/singly.c)
2. [Doubly Linked List](/data_structures/linked_list/doubly.c)