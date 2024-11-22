< [Home](/README.md)

### Arithmetic Operators

> Arithmetic operators are used to perform mathematical operations with basic variables such as integers and floating-point numbers.

Here is a brief summary of the different arithmetic operators in C++

1. Addition Operator (`+`): adds two numbers together.

```c
int sum = a + b;
```
<br>

2. Subtraction Operator (`-`): subtracts one number from another.

```c
int difference = a - b;
```
<br>

3. Multiplication Operator (`*`): multiplies two numbers together.

```c
int product = a * b;
```
<br>

4. Division Operator (`/`): divides one number by another. 

> Note that if both operands are integers, it will perform integer division and the result will be an integer.

```c
int quotient = a / b; // integer division
float quotient = float(a) / float(b); // floating-point division
```
<br>

5. Modulus Operator (`%`): calculates the remainder of an integer division.

```c
int remainder = a % b;
```
<br>

6. Increment Operator (`++`): increments the value of a variable by 1.

>There are two ways to use this operator: 
>prefix (++x): increments the value before returning it
>postfix (x++): returns the value first and then increments it.

```c
int x = 5;
int y = ++x; // x = 6, y = 6
int z = x++; // x = 7, z = 6
```
<br>

7. Decrement Operator (`--`): decrements the value of a variable by 1.

>Can also be used in prefix (--x) and postfix (x--) forms.

```c
int x = 5;
int y = --x; // x = 4, y = 4
int z = x--; // x = 3, z = 4
```
<br>

>These are the basic arithmetic operators in C++ that allow you to perform mathematical operations on your variables. Use them in combination with other control structures, such as loops and conditionals, to build more complex programs.