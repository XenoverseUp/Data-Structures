#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

int main(int argc, char** argv) {
	DoublyLinkedList List;

	List.AddNode(12);
	List.AddNode(15);
	List.AddNode(18);
	List.PrependNode(10);
	List.AddNode(21);
	List.PrependNode(8);


	List.PrintForward();
	cout << endl;
	List.PrintBackward();


	return 0;
}
