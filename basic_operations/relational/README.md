< [Home](/README.md)

### Relational & Equality Operators

> Relational operators compare values and return `true` or `false`.

#### Operators

- Greater than: `>`
- Less than: `<`
- Greater than or equal to: `>=`
- Less than or equal to: `<=`
- Equal to: `==`
- Not equal to: `!=`

```c
if (score >= 90 && score <= 100) {
    printf("Excellent!\n");
}
```

#### Example

See [`relational_operators.c`](./relational_operators.c) for a simple range validator.

#### Safety notes

- Avoid accidental assignment in comparisons (use `==`, not `=`).
- When comparing floating-point values, consider using a tolerance instead of direct equality.

#### Exercise

Update the example to warn when the score is outside the valid range of 0 to 100.
