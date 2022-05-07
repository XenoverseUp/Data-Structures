#include "LinkedList.h"

#include <stdio.h>
#include <stdlib.h>

LinkedList* init(int firstValue) {
    LinkedList* ll = (LinkedList*)malloc(sizeof(LinkedList));
    LinkedListNode* head = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    head->data = firstValue;
    head->next = NULL;
    ll->head = head;

    return ll;
}

void addTail(LinkedList* ll, int value) {
    LinkedListNode* node = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    node->data = value;
    node->next = NULL;

    LinkedListNode* curr = ll->head;

    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = node;
}

void addHead(LinkedList* ll, int value) {
    LinkedListNode* node = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    node->data = value;
    node->next = ll->head;
    ll->head = node;
}

void addAfterIndex(LinkedList* ll, int value, int index) {
    LinkedListNode* node = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    node->data = value;

    LinkedListNode* curr = ll->head;

    int count = 0;
    while (curr != NULL) {
        if (count == index) {
            node->next = curr->next;
            curr->next = node;
            break;
        }

        curr = curr->next;
        count++;
    }

    if (curr == NULL) {
        printf("The index %d is out of the range in the linked list.\n", index);
    }
}

void addAfter(LinkedList* ll, int value, int afterValue) {
    LinkedListNode* node = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    node->data = value;

    LinkedListNode* curr = ll->head;

    while (curr != NULL) {
        if (curr->data == afterValue) {
            node->next = curr->next;
            curr->next = node;
            break;
        }

        curr = curr->next;
    }

    if (curr == NULL) {
        printf("Cannot find the value %d in the linked list.\n", afterValue);
    }
}

int removeTail(LinkedList* ll) {
    LinkedListNode* curr = ll->head;
    LinkedListNode* prev;

    if (ll->head->next) {
        while (curr->next != NULL) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;

        int tailData = curr->data;
        free(curr);

        return tailData;
    } else {
        printf("\nCannot remove head!\n");
        return -1001;
    }
}

int removeHead(LinkedList* ll) {
    LinkedListNode* curr = ll->head;

    if (ll->head->next) {
        int headData = curr->data;
        ll->head = curr->next;
        free(curr);

        return headData;
    } else {
        printf("\nCannot remove head!\n");
        return -1001;
    }
}

void printList(LinkedList* ll) {
    LinkedListNode* curr = ll->head;

    while (curr != NULL) {
        if (curr->next == NULL) {
            printf("%d", curr->data);

        } else {
            printf("%d -> ", curr->data);
        }
        curr = curr->next;
    }
}