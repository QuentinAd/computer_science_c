< [Home](/README.md)

# Structuring a Codebase

This example demonstrates a typical C project layout with separate **include** and **src** directories.

```
structuring_codebase/
├── include/
│   └── utils.h
├── src/
│   ├── main.c
│   └── utils.c
```

Build and run:

```bash
clang src/main.c src/utils.c -Iinclude -o app && ./app
```
