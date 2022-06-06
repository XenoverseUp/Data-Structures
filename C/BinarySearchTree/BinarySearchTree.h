#pragma once

typedef struct BSTNode {
	int data;
	struct BSTNode* right;
	struct BSTNode* left;
} BSTNode;

typedef struct {
	BSTNode* root;
} BinarySearchTree;

BinarySearchTree* initBST(int);
BSTNode* newNode(int);
void insert(BinarySearchTree*, int);
void printTree(BinarySearchTree*);
void printTreeRecursively(BSTNode*, int level);
