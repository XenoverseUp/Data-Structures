#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

class DoublyLinkedList {
	private:

		typedef struct node {
			int data;
			node* next;
			node* prev;
		}* nodePtr;

		nodePtr head, tail, curr, temp;

	public:
		DoublyLinkedList();
		void AddNode(int addData);
		void PrependNode(int addData);
		void DeleteNode(int delData);
		void PrintForward();
		void PrintBackward();
};

#endif
