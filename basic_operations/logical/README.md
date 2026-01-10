< [Home](/README.md)

### Logical Operators

> Logical operators combine or invert conditions to produce `true`/`false` results in C and C++.

#### Operators

- AND: `&&`
- OR: `||`
- NOT: `!`

```c
if ((age >= 18 && has_id) || is_guardian) {
    printf("Access granted.\n");
}
```

#### Example

See [`logical_operators.c`](./logical_operators.c) for a small program that evaluates input flags.

#### Safety notes

- Use parentheses to make operator precedence explicit in compound expressions.
- Avoid mixing bitwise operators (`&`, `|`) with logical operators unless you intend bit-level logic.

#### Exercise

Add a third rule to the example that grants access only if a "quiet hours" flag is false.
