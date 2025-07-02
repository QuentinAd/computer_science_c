#include "stack.h"
#include <stdio.h>

#define STACK_CAPACITY 100

static int stack[STACK_CAPACITY];
static int top;

void init(void) {
    top = -1;
}

void push(int value) {
    if (!is_full()) {
        stack[++top] = value;
    }
}

int pop(void) {
    if (!is_empty()) {
        return stack[top--];
    }
    return -1; // indicates error
}

int peek(void) {
    if (!is_empty()) {
        return stack[top];
    }
    return -1;
}

bool is_empty(void) {
    return top == -1;
}

bool is_full(void) {
    return top == STACK_CAPACITY - 1;
}

#ifdef TEST_STACK
int main(void) {
    init();
    push(1);
    push(2);
    printf("peek: %d\n", peek());
    printf("pop: %d\n", pop());
    printf("pop: %d\n", pop());
    return 0;
}
#endif