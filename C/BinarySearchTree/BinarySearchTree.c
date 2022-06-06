#include <stdio.h>
#include <stdlib.h>
#include "BinarySearchTree.h"


BinarySearchTree* initBST(int rootData) {
	BinarySearchTree* bst = (BinarySearchTree*) malloc(sizeof(BinarySearchTree));
	bst->root = newNode(rootData);

	return bst;
}

BSTNode* newNode(int data) {
	BSTNode* node = (BSTNode*) malloc(sizeof(BSTNode));
	node->data = data;
	node->left = node->right = NULL;

	return node;
}

void insert(BinarySearchTree* bst,int data) {
	BSTNode* node = newNode(data);
	BSTNode* curr = bst->root;
	while (curr->right || curr->left) {
		if (data > curr->data) curr = curr->right;
		else curr = curr->left;
	}

	if (data > curr->data) curr->right = node;
	else curr->left = node;
}

void printTree(BinarySearchTree* bst) { printTreeRecursively(bst->root, 0); }

void printTreeRecursively(BSTNode* root, int level) {

	for (int i = 0; i < level; i++) 
		printf(i == level - 1 ? "|>" : " ");
	printf("%d\n", root->data);
	printTreeRecursively(root->left, level + 1);
	printTreeRecursively(root->right, level + 1);
}

