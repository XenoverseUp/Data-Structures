#include <stdio.h>
#include "BinarySearchTree.h"

int handleInput(BinarySearchTree* bst, int first) {
	int data, choice;

	if (first) {
		printf("Make a choice: (0 = Quit | 1 = Insert): ");
		scanf("%d", &choice);
		switch (choice) {
			case 0:
				return 1;
				break;
			case 1:
				printf("\n Enter the integer data: "); scanf("%d", &data);
				bst = initBST(data);
				break;
		}
	} else {
		printf("Make a choice: (0 = Quit | 1 = Insert | 2 = Remove | 3 = Search | 4 = Print) ");
		scanf("%d", &choice);

		switch (choice) {
			case 0: 
				return 1;
				break;
			case 1: 
				printf("\nEnter the integer data: "); scanf("%d", &data);
				insert(bst, data);
				break;
			case 2:
			case 3:
				break;
			case 4:
				printTree(bst);
				break;
			default:
				printf("Please enter a valid choice!");
		}
	}

	return 0;
}

int main(void) {
	BinarySearchTree* bst;
	int shouldExit = handleInput(bst, 1);
	if (shouldExit) goto exit;
	
	while (1) {
		shouldExit = handleInput(bst, 0);
		if (shouldExit) goto exit;
	}

	exit: ;

	return 0;
}
