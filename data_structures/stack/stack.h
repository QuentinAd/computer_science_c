#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

void init(void);
void push(int value);
int pop(void);
int peek(void);
bool is_empty(void);
bool is_full(void);

#endif
