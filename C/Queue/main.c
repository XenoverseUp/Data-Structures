#include <stdio.h>

#include "Queue.h"

int main(void) {
    int size = 5;
    Queue* q = init(size);

    queue(q, 10);
    queue(q, 20);
    queue(q, 30);
    queue(q, 40);
    queue(q, 50);

    int i;
    for (i = 0; i < q->front + 1; i++) {
        printf("%d\n", q->data[i]);
    }

    int popped = dequeue(q);
    printf("\nPopped: %d\n", popped);

    for (i = 0; i < q->front + 1; i++) {
        printf("%d\n", q->data[i]);
    }

    return 0;
}