#include "BST.h"
#include <iostream>

// constructor
BST::BST() {
	root = NULL;
}

// getter
Node* BST::GetRootElement() {
	return root;
}

// search method
Node* BST::Search(int key) {
	Node* node = root;
	while (node != NULL) {
		// going right
		if (node->data > key) {
			node = node->right;
		}
		// going left
		else if (node->data < key) {
			node = node->left;
		}
		// successfully found
		else {
			return node;
		}
	}
	// unsuccessful search
	return NULL;
}