#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int is_full(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

int is_empty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int value) {
    if (is_full(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->data[++s->top] = value;
}

int pop(Stack *s) {
    if (is_empty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->data[s->top--];
}

int peek(Stack *s) {
    if (is_empty(s)) {
        printf("Stack empty\n");
        return -1;
    }
    return s->data[s->top];
}

int main(void) {
    Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element: %d\n", peek(&s));
    printf("Popped: %d\n", pop(&s));
    printf("Popped: %d\n", pop(&s));
    printf("Popped: %d\n", pop(&s));

    return 0;
}
