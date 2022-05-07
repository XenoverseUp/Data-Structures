#include "Stack.h"

#include <stdio.h>
#include <stdlib.h>

Stack *init(int size) {
    Stack *sp = (Stack *)malloc(sizeof(Stack));
    sp->data = (int *)malloc(sizeof(int) * size);
    sp->size = size;
    sp->top = -1;

    return sp;
}

void push(Stack *sp, int value) {
    if (sp->top == sp->size - 1) {
        printf("Stack Overflow!");
    } else {
        sp->data[sp->top + 1] = value;
        sp->top++;
    }
}

int pop(Stack *sp) {
    if (sp->top == -1) return -1001;
    return sp->data[sp->top--];
}

int peek(Stack *sp) {
    if (sp->top == -1) return -1001;
    return sp->data[sp->top];
}

bool isEmpty(Stack *sp) {
    return sp->top == -1;
}

void print(Stack *sp) {
    while (sp->top != -1) {
        printf("%d\n", pop(sp));
    }
}