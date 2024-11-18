# Learning Computer Science in C

---

## Table of Contents

- [Repo Setup](#repo-setup)
- [Basics of Object-Oriented Programming (OOP)](#basics-of-object-oriented-programming)
- [Data Structures](#data-structures)
- [Algorithms](#algorithms)
- [Problem Sets](#problem-sets)
- [Sources](#sources)
    - [Books](#books)
    - [Online references](#online-references)

---



## Repo Setup

### clang

- Compile a single `.c` file

`clang -o main main.c`

- Run the clang on multiple .c files to compile a program

`clang -o program main.c leap.c`


### unit tests

- Single command

`clang -o exercism/leap/test exercism/leap/test.c exercism/leap/leap.c ../Unity/src/unity.c && ./exercism/leap/test`

- Setting up tasks on VS Code 
    - See [`.vscode/tasks.json`](.vscode/tasks.json)
    - Defines the build and run tasks
    - Use `Cmd + Shift + P`, and look for `Tasks: Run Build Task` and `Tasks: Run Test Task`

**[⬆ back to top](#table-of-contents)**

## Basics of Object-Oriented Programming
### Functions

- Practice at [`/math_utils`](/math_utils)

Add simple `add` function in math_utils module and its associated header file

-

**[⬆ back to top](#table-of-contents)**

## Data Structures
### Arrays
- Practice at [`/array`](/array)

### ...
- ...

**[⬆ back to top](#table-of-contents)**

## Algorithms
### ...
- ...


**[⬆ back to top](#table-of-contents)**

## Problem Sets

### Exercism
- Practice at [`/exercism`](/exercism)

**[⬆ back to top](#table-of-contents)**

## Sources

### Books

#### C language

- Short book to review the basics of the language
    - [The C Programming Language](https://freecomputerbooks.com/The-C-Programming-Language.html)
- Fundamentals, Data Structures, Sorting, Searching, and Graph Algorithms
    - [Algorithms in C](https://freecomputerbooks.com/Algorithms-in-C.html)

#### Interview prep books


- [Programming Interviews Exposed: Coding Your Way Through the Interview, 4th Edition](https://www.amazon.com/Programming-Interviews-Exposed-Through-Interview/dp/111941847X/)
    - answers in C++ and Java
- [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - answers in Java

**Extras**
    - [Sample Elements of Programming Interviews (C++ version)](https://elementsofprogramminginterviews.com/sample/epilight_cpp_new.pdf)

**[⬆ back to top](#table-of-contents)**

### Online references

- [Exercism](https://exercism.org/tracks)
- [Codewars](http://www.codewars.com)
- [HackerEarth](https://www.hackerearth.com/for-developers/)
- [Scaler Topics (Java, C++)](https://www.scaler.com/topics/)
- [Programiz PRO Community Challenges)](https://programiz.pro/)

**[⬆ back to top](#table-of-contents)**