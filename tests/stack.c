#include "stack.h"

void stack_init(Stack *s) {
    s->top = -1;
}

bool stack_push(Stack *s, int value) {
    if (s->top >= STACK_MAX - 1) {
        return false;
    }
    s->data[++s->top] = value;
    return true;
}

bool stack_pop(Stack *s, int *value) {
    if (s->top < 0) {
        return false;
    }
    if (value) {
        *value = s->data[s->top];
    }
    s->top--;
    return true;
}

bool stack_peek(const Stack *s, int *value) {
    if (s->top < 0) {
        return false;
    }
    if (value) {
        *value = s->data[s->top];
    }
    return true;
}
