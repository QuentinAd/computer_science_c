< [Home](/README.md)

### Conditional (Ternary) Operator

> The ternary operator `?:` chooses between two expressions based on a condition.

```c
const char *label = (score >= 60) ? "pass" : "fail";
```

#### Example

See [`conditional_operator.c`](./conditional_operator.c) for a ternary-based status label.

#### Safety notes

- Keep ternary expressions concise; prefer `if` statements for complex logic.
- Ensure both branches have compatible types to avoid implicit conversions.

#### Exercise

Add a third status label for perfect scores using a nested ternary.
