< [Home](/README.md)

### Assignment Operators

> Assignment operators store values in variables, including compound updates.

#### Operators

- Simple assignment: `=`
- Add and assign: `+=`
- Subtract and assign: `-=`
- Multiply and assign: `*=`
- Divide and assign: `/=`
- Modulo and assign: `%=`
- Bitwise assignment: `&=`, `|=`, `^=`, `<<=`, `>>=`

```c
int total = 0;
total += 5;
total *= 2;
```

#### Example

See [`assignment_operators.c`](./assignment_operators.c) for a running total example.

#### Safety notes

- Be mindful of integer division when using `/=` with integers.
- Compound assignments still follow type conversion rules (watch for truncation).

#### Exercise

Extend the example to track a running average using `+=` and `/=`.
