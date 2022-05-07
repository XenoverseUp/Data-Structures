#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LinkedListNode {
    int data;
    struct LinkedListNode* next;
} LinkedListNode;

typedef struct {
    LinkedListNode* head;
} LinkedList;

LinkedList* init(int firstValue);
void addTail(LinkedList* ll, int value);
void addHead(LinkedList* ll, int value);
void addAfterIndex(LinkedList* ll, int value, int index);
void addAfter(LinkedList* ll, int value, int afterValue);
int removeTail(LinkedList* ll);
int removeHead(LinkedList* ll);
void printList(LinkedList* ll);

#endif