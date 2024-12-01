# Learning Computer Science in C(++)

---

## Table of Contents

- [Specificities of C(++) Language](#specificities-of-c-language)
    - [Environment Setup](#environment-setup)
    - [Basic Operations](#basic-operations)
    - [Functions](#functions)
    - [Data Types](#data-types)
    - [Pointers & References](#pointers--references) (*Coming Soon*)
    - [Structuring Codebase](#structuring-codebase) (*Coming Soon*)
    - [Structures & Classes](#structures--classes) (*Coming Soon*)
    - [Exception Handling](#exception-handling) (*Coming Soon*)
- [Computer Science Concepts](#computer-science-concepts)
    - [Asymptotic Notation (Big O)](#asymptotic-notation)
    - [Data Structures](#data-structures)
    - [Algorithms](#algorithms)
- [Problem Sets](#problem-sets)
- [Sources](#sources)
    - [Books](#books)
    - [Online references](#online-references)

---
---

## Specificities of C(++) Language

---

#### C vs C++

> C and C++ are two popular programming languages with some similarities, but they also have key differences. C++ is an extension of the C programming language, with added features such as object-oriented programming, classes, and exception handling. Although both languages are used for similar tasks, they have their own syntax and semantics, which makes them distinct from each other.

##### Syntax and Semantics

<details><summary>C</summary>

    - C is a procedural programming language.
    - Focuses on functions and structured programming.
    - Does not support objects or classes.
    - Memory management is manual, using functions like malloc and free.

</details><details><summary>C++</summary>

    - C++ is both procedural and object-oriented.
    - Supports both functions and classes.
    - Incorporates different programming paradigms.
    - Memory management can be manual (like C) or rely on constructors/destructors and smart pointers.

<br></details>

### Environment Setup

<details><summary>Compiler</summary>

- Compiling using the default `cc` compiler

  ```bash
  cc hello/world.c
  ```

  >This will default to `a.out` output file


- Compile a single `.c` file into specified output file:

    ```bash
    clang -o hello/world.out hello/world.c
    ```

- Compile a single `.cpp` file:

    ```bash
    clang++ -o hello/world.out hello/world.cpp
    ```

- Run the clang on multiple `.c` files to compile a program:

    ```bash
    clang -o program.out hello/world.c hello/utils.c
    ```

- Run the clang on multiple `.cpp` files to compile a program:

    ```bash
    clang++ -o program.out hello/world.cpp hello/utils.cpp
    ```

</details>

<details><summary>Unit tests</summary>


- Single command

    ```bash
    cd problem_sets && clang -o leap/test.out leap/test.c leap/main.c ../Unity/src/unity.c && ./leap/test.out
    ```

- Setting up tasks on VS Code 
    - See [`.vscode/tasks.json`](.vscode/tasks.json)
    - Defines the build and run tasks
    - Use `Cmd + Shift + P`, and look for `Tasks: Run Build Task` and `Tasks: Run Test Task`

</details>

<br>**[⬆ back to top](#table-of-contents)**

---

### Basic Operations

- Arithmetic Operators

    - Practice at [/basic_operations/arithmetic/](/basic_operations/arithmetic/)

    - Operators: `+`, `-`, `*`, `/`, `%`
    - Used for basic mathematical computations.

    - **Key Notes:**

        - Division with integers discards the remainder (e.g., `7 / 2 = 3`).
        - The `%` operator is for remainder calculation.

[Learn more...](/basic_operations/arithmetic/README.md)

- Logical Operators

    - Practice at [/basic_operations/logical/](/basic_operations/logical/)

    - Operators: `&&` (AND), `||` (OR), `!` (NOT)
    - Combine conditions to create complex logical expressions.

    - **Key Notes:**

        - Typically used in control statements like `if`, `while`, or `for`.

[Learn more...](/basic_operations/logical/README.md)


- Loops: for/while

    - Practice at [/basic_operations/loops/](/basic_operations/loops/)

    - **For Loop**: Best when the number of iterations is known.
    - **While Loop**: Used for condition-based execution.
    - **Do-While Loop**: Guarantees at least one execution of the loop body.

[Learn more...](/basic_operations/loops/README.md)

- Bitwise Operators

    - Practice at [/basic_operations/bitwise/](/basic_operations/bitwise/)

    - Operators: `&` (AND), `|` (OR), `^` (XOR), `~` (NOT), `<<` (left shift), `>>` (right shift)
    - Used for fast, low-level computations.

    - **Key Notes:**

        - Left shift (`<<`) multiplies by 2; right shift (`>>`) divides by 2.
        - Common for tasks like flag manipulation or optimizing arithmetic.

[Learn more...](/basic_operations/bitwise/README.md)

<br>**[⬆ back to top](#table-of-contents)**

---

### Functions

Practice at [`/functions`](/functions)

- **Definition**: A block of code designed to perform a specific task, called when needed.
- **Order of Execution**:
  - Function prototype declaration (optional but recommended).
  - Function definition.
  - Function call.
- **Prototype**: Specifies the function's return type and parameters, ensuring proper usage.
  - Example: `int add(int a, int b);`
- **Example**:
  - **math_utils.h**: Contains the prototype: `int add(int a, int b);`
  - **math_utils.c**: Defines the function:
    ```c
    int add(int a, int b) {
        return a + b;
    }
    ```
  - Usage as in **main.c**:
    ```c
    #include "math_utils.h"
    int result = add(3, 5); // result = 8
    ```
- **Key Notes**:
  - Functions can return values or be `void`.
  - Parameters are passed by value by default.

[Learn more...](/functions/README.md)

<br>**[⬆ back to top](#table-of-contents)**

---

### Data Types

Practice at [`/data-types`](/data-types)

- **Primitive Data Types**:
  - `int`: Stores integers (e.g., `int x = 10;`).
  - `float`: Stores decimal numbers (e.g., `float pi = 3.14;`).
  - `char`: Stores single characters (e.g., `char c = 'A';`).
  - `double`: Stores double-precision decimals (e.g., `double d = 3.14159;`).
- **Derived Data Types**:
  - Arrays: Collection of elements (e.g., `int arr[5] = {1, 2, 3, 4, 5};`).
  - Pointers: Store memory addresses (e.g., `int *ptr = &x;`).
  - Structures: User-defined data types (e.g., `struct Person { char name[50]; int age; };`).
- **Void**: Represents no value or no data (e.g., `void printMessage();`).
- **Key Notes**:
  - Use appropriate data types to optimize memory usage.
  - Type casting allows conversion (e.g., `(float)intVar`).

[Learn more...](/data-types/README.md)

<br>**[⬆ back to top](#table-of-contents)**

---
---
 
# Computer Science Concepts

---

## Asymptotic Notation

### Big O
> Describes the upper bound of the runtime of an algorithm in the worst case.

### Big-Theta
> Provides a tight bound (both upper and lower) on the runtime of an algorithm.

### Big Omega
> Describes the lower bound of the runtime of an algorithm in the best case.

### Common Runtimes

### Common Runtimes

| Complexity | Example | Description |
|- |- |- |
| Constant `O(1)` | Accessing an array index | Operations that execute in the same time regardless of input size |
| Logarithmic `O(log n)` | Binary search | Dividing the problem in half each time |
| Linear `O(n)` | Looping through an array | Processing each element once |
| Log-linear `O(n log n)` | Merge sort, Quick sort | Divide-and-conquer algorithms |
| Quadratic `O(n²)` | Nested loops, Bubble sort | Processing each element for each other element |
| Cubic `O(n³)` | Triple nested loops | Processing each element for each other element for each other element |
| Exponential `O(2ⁿ)` | Recursive Fibonacci | Solutions that grow exponentially with input size |
| Factorial `O(n!)` | Generating all permutations | Solutions that grow factorially with input size |


<br>**[⬆ back to top](#table-of-contents)**

## Data Structures

<details><summary>Array</summary>

Practice at [`data_structures/array`](data_structures/array)

- **Definition**: A collection of elements stored at contiguous memory locations.
- **Key Operations**:
  - Access: `O(1)`
  - Insertion/Deletion: `O(n)` (in worst case, shifting elements is required).
- **Use Cases**:
  - Storing fixed-size, ordered collections of data.
  - Implementing other data structures like stacks or queues.

[Learn more...](/data_structures/array/README.md)

</details>
<details><summary>Linked List</summary>

Practice at [`data_structures/linked_list`](data_structures/linked_list)

- **Definition**: A linear data structure where elements (nodes) are connected via pointers.
- **Types**:
  - Singly Linked List
  - Doubly Linked List
  - Circular Linked List
- **Key Operations**:
  - Insertion
    - Prepend (Insert at Head): `O(1)`
    - Append (Insert at Tail): `O(n)`; `O(1)` (with tail)
  - Search: `O(n)`
  - Deletion: `O(n)`; `O(1)` (when node reference is available)
- **Use Cases**:
  - Dynamic memory allocation.
  - Efficient insertions and deletions compared to arrays.

[Learn more...](/data_structures/linked_list/README.md)

</details>
<details><summary>Stack</summary>

Practice at [`data_structures/stack`](data_structures/stack)

- **Definition**: A collection of elements with **Last-In, First-Out (LIFO)** access.
- **Key Operations**:
  - Push (Insert): `O(1)`
  - Pop (Remove): `O(1)`
  - Peek (Top): `O(1)`
- **Use Cases**:
  - Undo functionality in editors.
  - Function call stack in recursion.

[Learn more...](/data_structures/stack/README.md)

</details>
<details><summary>Queue</summary>

Practice at [`data_structures/queue`](data_structures/queue)

- **Definition**: A collection of elements with **First-In, First-Out (FIFO)** access.
- **Types**:
  - Simple Queue
  - Circular Queue
  - Priority Queue
- **Key Operations**:
  - Enqueue (Insert): `O(1)`
  - Dequeue (Remove): `O(1)`
- **Use Cases**:
  - Scheduling tasks.
  - Buffer management in systems.

[Learn more...](/data_structures/queue/README.md)

</details>
<details><summary>Hashtable</summary>

Practice at [`data_structures/hashtable`](data_structures/hashtable)

- **Definition**: A data structure that maps keys to values using a hash function.
- **Key Operations**:
  - Insert: `O(1)` (average case)
  - Lookup: `O(1)` (average case)
  - Delete: `O(1)` (average case)
- **Use Cases**:
  - Fast lookups for large datasets.
  - Implementing caches.

[Learn more...](/data_structures/hashtable/README.md)

</details>
<details><summary>Tree</summary>

Practice at [`data_structures/tree`](data_structures/tree)

- **Definition**: A hierarchical data structure with a root and child nodes.
- **Types**:
  - Binary Tree
  - Binary Search Tree
  - Full Binary Tree
  - Complete Binary Tree
  - Balanced Tree
  - Unbalanced Tree
- **Key Operations**:
  - Traversals: In-order, Pre-order, Post-order (`O(n)`).
  - Search/Insert/Delete: `O(log n)` (in balanced trees).
- **Use Cases**:
  - Representing hierarchical data (e.g., file systems).
  - Search and sorting algorithms.

[Learn more...](/data_structures/tree/README.md)

</details>
<details><summary>Heap</summary>

Practice at [`data_structures/heap`](data_structures/heap)

- **Definition**: A complete binary tree used to implement priority queues.
- **Types**:
  - Min-Heap: Root is the smallest element.
  - Max-Heap: Root is the largest element.
- **Key Operations**:
  - Insert: `O(log n)`
  - Delete (Heapify): `O(log n)`
- **Use Cases**:
  - Priority queues.
  - Efficient sorting (Heap Sort).

[Learn more...](/data_structures/heap/README.md)

</details>
<details><summary>Graph</summary>

Practice at [`data_structures/graph`](data_structures/graph)

- **Definition**: A collection of nodes (vertices) and edges connecting pairs of nodes.
- **Types**:
  - Directed Graph
  - Undirected Graph
  - Weighted Graph
  - Spanning Tree
- **Representation**:
  - Adjacency Array [^adjacency-array]: Space-efficient for sparse graphs.
  - Adjacency Matrix [^adjacency-matrix]: Quick edge lookups.
- **Key Operations**:
  - Traversals: Breadth-First Search (BFS), Depth-First Search (DFS).
  - Shortest Path Algorithms: Dijkstra, A*.
- **Use Cases**:
  - Social networks, routing, and navigation systems.

[Learn more...](/data_structures/graph/README.md)

[^adjacency-array]: https://www.programiz.com/dsa/graph-adjacency-matrix
[^adjacency-matrix]: https://www.programiz.com/dsa/graph-adjacency-list

</details>

<br>**[⬆ back to top](#table-of-contents)**

## Algorithms

<details><summary>Graphs</summary>

Practice at [`algorithms/graphs`](algorithms/graphs)

- **Key Algorithms**:
  - Breadth-First Search (BFS)
  - Depth-First Search (DFS)
  - Dijkstra's Algorithm (Shortest Path)
  - Kruskal's Algorithm (Minimum Spanning Tree)
  - Floyd-Warshall Algorithm (All-Pairs Shortest Path)
- **Use Cases**:
  - Social networks, routing, dependency resolution.

[Learn more...](/algorithms/graphs/README.md)

</details>

<details><summary>Tree</summary>

Practice at [`algorithms/tree`](algorithms/tree)

- **Key Algorithms**:
  - Preorder, Inorder, Postorder Traversals
  - Binary Search
  - AVL Tree Rotations
  - Huffman Coding (Compression)
- **Use Cases**:
  - Parsing expressions, organizing hierarchies.

[Learn more...](/algorithms/tree/README.md)

</details>

<details><summary>Recursion</summary>

Practice at [`algorithms/recursion`](algorithms/recursion)

- **Definition**: A function calling itself to solve subproblems.
- **Examples**:
  - Factorial Calculation
  - Fibonacci Series
  - Tower of Hanoi
- **Key Notes**:
  - Ensure a base case to avoid infinite loops.
  - Stack memory usage increases with depth.

[Learn more...](/algorithms/recursion/README.md)

</details>

<details><summary>Sorting</summary>

Practice at [`algorithms/sorting`](algorithms/sorting)

- **Algorithms**:
  - Bubble Sort
  - Merge Sort
  - Quick Sort
  - Heap Sort
- **Key Notes**:
  - Comparison-based sorting algorithms vary in efficiency.
  - Merge Sort and Quick Sort are widely used for their performance.

[Learn more...](/algorithms/sorting/README.md)

</details>

<details><summary>Greedy Algorithms</summary>

Practice at [`algorithms/greedy`](algorithms/greedy/)

- **Definition**: Makes the locally optimal choice at each step.
- **Examples**:
  - Activity Selection Problem
  - Huffman Encoding
  - Kruskal's Algorithm (MST)
- **Use Cases**:
  - Resource allocation, scheduling.

[Learn more...](/algorithms/greedy/README.md)

</details>

<details><summary>Backtracking</summary>

Practice at [`algorithms/backtracking/`](algorithms/backtracking/)

- **Definition**: Explores all possibilities and backtracks when a path fails.
- **Examples**:
  - N-Queens Problem
  - Sudoku Solver
  - Subset Sum Problem
- **Key Notes**:
  - Can be inefficient; pruning paths is essential.

[Learn more...](/algorithms/backtracking/README.md)

</details>

<details><summary>Caches</summary>

Practice at [`algorithms/caches`](algorithms/caches)

- **Definition**: Temporary storage for faster access to frequently used data.
- **Examples**:
  - LRU (Least Recently Used) Cache
  - LFU (Least Frequently Used) Cache
- **Use Cases**:
  - Web browsers, memory management, databases.

[Learn more...](/algorithms/caches/README.md)

</details>

<br>**[⬆ back to top](#table-of-contents)**


## Problem Sets

Practice at [`/problem_sets`](/problem_sets)

<br>**[⬆ back to top](#table-of-contents)**

## Sources

### Books


<details><summary>C language</summary>

- [The C Programming Language](https://freecomputerbooks.com/The-C-Programming-Language.html)
    - Short book to review the basics of the language
- [Algorithms in C](https://freecomputerbooks.com/Algorithms-in-C.html)
    - Fundamentals, Data Structures, Sorting, Searching, and Graph Algorithms

</details>

<details><summary>Interview preparation books</summary>

- [Programming Interviews Exposed: Coding Your Way Through the Interview, 4th Edition](https://archive.org/download/4-programming-interviews-exposed-4th-edition/4Programming%20Interviews%20Exposed%2C%204th%20Edition.pdf)
    - answers in C++ and Java
- [Cracking the Coding Interview, 6th Edition](https://archive.org/download/4-programming-interviews-exposed-4th-edition/Cracking-the-Coding-Interview-6th-Edition-189-Programming-Questions-and-Solutions.pdf)
    - answers in Java

</details>

<details><summary>Extras</summary>

- [Sample Elements of Programming Interviews (C++ version)](https://elementsofprogramminginterviews.com/sample/epilight_cpp_new.pdf)
    - Sample only

</details>

<br>**[⬆ back to top](#table-of-contents)**

### Online references


<details><summary>Study plans</summary>

- [Roadmap.sh](https://roadmap.sh/cpp)
- [Khan Academy](https://www.khanacademy.org/computing/computer-science/)

</details>



</details>

<details><summary>Practice problem-solving</summary>

- [Exercism](https://exercism.org/tracks)
- [Codewars](http://www.codewars.com)
- [HackerEarth](https://www.hackerearth.com/for-developers/)
- [Scaler Topics (Java, C++)](https://www.scaler.com/topics/)
- [Programiz PRO Community Challenges)](https://programiz.pro/)

</details>

<br>**[⬆ back to top](#table-of-contents)**