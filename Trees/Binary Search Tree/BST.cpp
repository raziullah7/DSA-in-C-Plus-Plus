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