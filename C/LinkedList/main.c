#include <stdio.h>

#include "LinkedList.h"

int main(void) {
    LinkedList* l = init(10);
    removeTail(l);
    removeHead(l);
    addTail(l, 20);
    addTail(l, 30);
    addTail(l, 50);

    addHead(l, 0);
    addHead(l, -10);

    addAfter(l, 40, 30);
    addAfter(l, 60, 50);
    addAfter(l, 70, 60);
    addAfter(l, 13, 13);
    addAfterIndex(l, -5, 0);
    int removedTail = removeTail(l);
    int removedHead = removeHead(l);

    printList(l);
}