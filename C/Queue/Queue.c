#include "Queue.h"

#include <stdio.h>
#include <stdlib.h>

Queue* init(int size) {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->data = (int*)malloc(sizeof(int) * size);
    q->front = -1;
    q->size = size;
}

void queue(Queue* qp, int value) {
    if (qp->front == qp->size - 1)
        printf("Overflow!!");
    else
        qp->data[++qp->front] = value;
}

int dequeue(Queue* qp) {
    if (qp->front == -1) {
        printf("Underflow!!");
        return -1001;
    } else {
        int pop = qp->data[0];
        int* temp = malloc(sizeof(int) * qp->size);
        int i;
        for (i = 0; i < qp->front + 1; i++) {
            temp[i] = qp->data[i + 1];
        }

        free(qp->data);
        qp->front--;
        qp->data = temp;

        return pop;
    }
}

int peekFront(Queue* qp) {
    return qp->data[qp->front];
}

int peekBack(Queue* qp) {
    return qp->data[0];
}

bool isEmpty(Queue* qp) {
    return qp->front == -1;
}