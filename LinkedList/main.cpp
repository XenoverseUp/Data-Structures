#include <cstdlib>
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(int argc, char** argv) {
	LinkedList List;

	List.AddNode(20);
	List.AddNode(12);
	List.AddNode(2);
	List.AddNode(57);



	List.PrintList();
	cout << endl;

	List.DeleteNode(12);
	List.PrintList();
	cout << endl;


	return 0;
}
