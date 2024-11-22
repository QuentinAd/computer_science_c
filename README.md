# Learning Computer Science in C(++)

---

## Table of Contents

- [Intro to C](#intro-to-c)
    - [Environment Setup](#environment-setup)
    - [Basic Operations](#basic-operations)
    - [Functions](#functions)
    - [Data Types](#data-types)
    - //TODO [Pointers & References]()
    - //TODO [Structuring Codebase]()
    - //TODO [Structures & Classes]()
    - //TODO [Exception Handling]()
- [Asymptotic Notation (Big O)](#asymptotic-notation)
- [Data Structures](#data-structures)
- [Algorithms](#algorithms)
- [Problem Sets](#problem-sets)
- [Sources](#sources)
    - [Books](#books)
    - [Online references](#online-references)

---

## Intro to C

#### C vs C++

> C and C++ are two popular programming languages with some similarities, but they also have key differences. C++ is an extension of the C programming language, with added features such as object-oriented programming, classes, and exception handling. Although both languages are used for similar tasks, they have their own syntax and semantics, which makes them distinct from each other.

##### Syntax and Semantics
- C
    - C is a procedural programming language.
    - Focuses on functions and structured programming.
    - Does not support objects or classes.
    - Memory management is manual, using functions like malloc and free.
- C++
    - C++ is both procedural and object-oriented.
    - Supports both functions and classes.
    - Incorporates different programming paradigms.
    - Memory management can be manual (like C) or rely on constructors/destructors and smart pointers.

### Environment Setup

#### clang

- Compile a single `.c` file

`clang -o hello/world hello/world.c`

- Compile a single `.cpp` file

`clang++ -o hello/world hello/world.cpp`

- Run the clang on multiple `.c` files to compile a program

`clang -o program hello/world.c hello/utils.c`

- Run the clang on multiple `.cpp` files to compile a program

`clang++ -o program hello/world.cpp hello/utils.cpp`


#### unit tests

- Single command

`cd problem_sets && clang -o leap/test leap/test.c leap/main.c ../Unity/src/unity.c && ./leap/test`

- Setting up tasks on VS Code 
    - See [`.vscode/tasks.json`](.vscode/tasks.json)
    - Defines the build and run tasks
    - Use `Cmd + Shift + P`, and look for `Tasks: Run Build Task` and `Tasks: Run Test Task`

**[⬆ back to top](#table-of-contents)**

### Basic Operations

#### Arithmetic Operators

Practice at [/basic_operations/arithmetic/](/basic_operations/arithmetic/)
[Learn more...](/basic_operations/arithmetic/README.md)

#### Logical Operators


#### Loops: for/while


#### Bitwise Operators


**[⬆ back to top](#table-of-contents)**

### Functions

Practice at [`/functions`](/functions)

    - Added simple `add` function in math_utils module and its associated header file

**[⬆ back to top](#table-of-contents)**

---
 
# Computer Science Concepts

## Data Structures

### Arrays
 Practice at [`data_structures/array`](data_structures/array)

### Linked Lists 
Practice at [`data_structures/linked_lists`](data_structures/linked_lists)

### Stack
Practice at [`data_structures/stack`](data_structures/stack)

### Hashtable
Practice at [`data_structures/hashtable`](data_structures/hashtable)

### Queue
Practice at [`data_structures/queue`](data_structures/queue)

### Tree

Practice at [`data_structures/tree`](data_structures/tree)

- Binary Tree
- Binary Search Tree
- Full Binary Tree
- Complete Binary Tree
- Balanced Tree
- Unbalanced Tree

### Heap
Practice at [`data_structures/heap`](data_structures/heap)


### Graph
Practice at [`data_structures/graph`](data_structures/graph)

- Directed Graph
- Undirected Graph
- Spanning Tree

> Graphs can be represented as either [adjacency array](https://www.programiz.com/dsa/graph-adjacency-matrix) or [adjacency matrix](https://www.programiz.com/dsa/graph-adjacency-list)



**[⬆ back to top](#table-of-contents)**

## Asymptotic Notation

### Big O
> 

### Big-Theta
>

### Big Omega
>

#### Common Runtimes

#### Constant
>

#### Logarithmic
>

#### Linear
>

#### Polynomial
>

#### Exponential
>

#### Factorial
>

**[⬆ back to top](#table-of-contents)**

## Algorithms

#### Graphs

#### Tree

#### Recursion

#### Sorting

#### Greedy Algorithms

#### Back Tracking

#### Caches


**[⬆ back to top](#table-of-contents)**

## Problem Sets

Practice at [`/problem_sets`](/problem_sets)

**[⬆ back to top](#table-of-contents)**

## Sources

### Books

#### C language

- Short book to review the basics of the language
    - [The C Programming Language](https://freecomputerbooks.com/The-C-Programming-Language.html)
- Fundamentals, Data Structures, Sorting, Searching, and Graph Algorithms
    - [Algorithms in C](https://freecomputerbooks.com/Algorithms-in-C.html)

#### Interview prep books

- [Programming Interviews Exposed: Coding Your Way Through the Interview, 4th Edition](https://archive.org/download/4-programming-interviews-exposed-4th-edition/4Programming%20Interviews%20Exposed%2C%204th%20Edition.pdf)
    - answers in C++ and Java
- [Cracking the Coding Interview, 6th Edition](https://archive.org/download/4-programming-interviews-exposed-4th-edition/Cracking-the-Coding-Interview-6th-Edition-189-Programming-Questions-and-Solutions.pdf)
    - answers in Java

**Extras**
    - [Sample Elements of Programming Interviews (C++ version)](https://elementsofprogramminginterviews.com/sample/epilight_cpp_new.pdf)

**[⬆ back to top](#table-of-contents)**

### Online references

## Guidelines & Study plans

- [Roadmap.sh](https://roadmap.sh/cpp)
- [Khan Academy](https://www.khanacademy.org/computing/computer-science/)

## Practice problem-solving
- [Exercism](https://exercism.org/tracks)
- [Codewars](http://www.codewars.com)
- [HackerEarth](https://www.hackerearth.com/for-developers/)
- [Scaler Topics (Java, C++)](https://www.scaler.com/topics/)
- [Programiz PRO Community Challenges)](https://programiz.pro/)

**[⬆ back to top](#table-of-contents)**