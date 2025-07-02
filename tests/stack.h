#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define STACK_MAX 100

typedef struct {
    int data[STACK_MAX];
    int top;
} Stack;

void stack_init(Stack *s);
bool stack_push(Stack *s, int value);
bool stack_pop(Stack *s, int *value);
bool stack_peek(const Stack *s, int *value);

#endif // STACK_H
