#include "Stack.h"

int main(void) {
    Stack* s = init(5);
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);

    int last = pop(s);
    int top = peek(s);

    print(s);

    return 0;
}