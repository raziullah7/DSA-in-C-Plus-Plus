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

// iterative search method
Node* BST::Search(int key) {
	Node* node = root;

	while (node != NULL) {
		// successfully found
		if (node->data == key) {
			return node;
		}
		// going left
		else if (node->data < key) {
			node = node->left;
		}
		// going right
		else {
			node = node->right;
		}
	}
	// unsuccessful search
	return NULL;
}

// recursive search method
Node* BST::RecursiveSearch(int key, Node* node) {
	// input validation
	if (node == NULL) {
		return NULL;
	}

	// successful search
	if (node->data == key) {
		return node;
	}
	// going left
	else if (node->data < key) {
		return RecursiveSearch(key, node->left);
	}
	// going right
	else {
		return RecursiveSearch(key, node->right);
	}
}