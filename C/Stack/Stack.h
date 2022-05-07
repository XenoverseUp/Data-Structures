#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct {
    int *data;
    int size;
    int top;
} Stack;

Stack *init(int size);
void push(Stack *sp, int value);
int pop(Stack *sp);
int peek(Stack *sp);
bool isEmpty(Stack *sp);
void print(Stack *sp);

#endif