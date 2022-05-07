#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {
	private:

		typedef struct node {
			int data;
			node* next;
		}* nodePtr;

		nodePtr head, curr, temp;

	public:
		LinkedList();
		void AddNode(int addData);
		void DeleteNode(int delData);
		void PrintList();
};


#endif
