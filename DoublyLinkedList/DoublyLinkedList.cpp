#include <iostream>
#include <cstdlib>

#include "DoublyLinkedList.h"

using namespace std;

DoublyLinkedList::DoublyLinkedList() {
	head = nullptr;
	tail = nullptr;
	curr = nullptr;
	temp = nullptr;
}

void DoublyLinkedList::AddNode(int addData) {
	nodePtr n = new node();
	n->data = addData;
	n->next = nullptr;


	if (head == nullptr) {
		n->prev = nullptr;
		head = n;
		tail = n;
	} else {
		tail->next = n;
		n->prev = tail;
		tail = n;
	}
}

void DoublyLinkedList::PrependNode(int addData) {
	nodePtr n = new node();
	n->data = addData;
	n->prev = nullptr;

	if (head == nullptr) {
		n->next = nullptr;
		head = n;
		tail = n;
	} else {
		head->prev = n;
		n->next = head;
		head = n;
	}
}

void DoublyLinkedList::PrintForward() {
	curr = head;
	cout << "Printing forward...\n";

	while (curr != nullptr) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}

void DoublyLinkedList::PrintBackward() {
	curr = tail;
	cout << "Printing backward...\n";

	while (curr != nullptr) {
		cout << curr->data << endl;
		curr = curr->prev;
	}
}














