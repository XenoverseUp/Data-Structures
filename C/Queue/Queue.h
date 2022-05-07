#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef struct {
	int* data;
	int size;
	int front;
} Queue;

Queue* init(int size);
void queue(Queue* qp, int value);
int dequeue(Queue* qp);
int peekFront(Queue* qp);
int peekBack(Queue* qp);
bool isEmpty(Queue* qp);

#endif