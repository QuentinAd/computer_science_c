< [Home](/README.md)

# Structures & Classes

Structures let you group related data into a single type. In C, structs are often paired
with helper functions to keep operations in one place. In C++, classes build on this idea
by adding constructors, destructors, and access control.

## C Structure Example

See [`person`](./person.h) and [`person.c`](./person.c) for a simple data model with
nested fields and helper functions.

## C++ Class Concept (Snippet)

```cpp
class Counter {
public:
    explicit Counter(int start) : value_(start) {}
    void increment() { ++value_; }
    int value() const { return value_; }

private:
    int value_ = 0;
};
```

#### Exercise

Add a new field to `Person` and update `person_init` to populate it.

<br>**[⬆ back to top](#structures--classes)**
