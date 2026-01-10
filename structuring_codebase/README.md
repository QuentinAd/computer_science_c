< [Home](/README.md)

# Structuring a Codebase

Breaking programs into headers and implementation files keeps related logic together and
makes larger projects easier to navigate. The example below shows how to split a small
program into modules and compile everything from the command line.

## Key Concepts

- **Headers** (`.h`) declare shared types and function prototypes.
- **Implementations** (`.c`) define the behavior behind those declarations.
- **Include guards** prevent duplicate definitions when headers are included multiple times.
- **Build commands** stitch modules together with the compiler or a build tool like Make.

## Example Project

See [`sample_project`](./sample_project) for a multi-file program that exposes two modules:

- `greeting`: formats a greeting message.
- `math_utils`: handles simple arithmetic helpers.

Build it from the repository root:

```bash
clang -o structuring_codebase/sample_project/app \
  structuring_codebase/sample_project/main.c \
  structuring_codebase/sample_project/greeting.c \
  structuring_codebase/sample_project/math_utils.c
```

<br>**[⬆ back to top](#structuring-a-codebase)**
