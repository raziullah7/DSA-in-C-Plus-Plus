#include "BST.h"
#include <iostream>
using namespace std;

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

void BST::Insert(int key) {
	// using R for traversing and r to store
	// the parent of R, p is new node to be entered
	Node* R = root, * p , * r;
	// inserting at root position
	if (root == NULL) {
		p = new Node;
		p->data = key;
		p->left = NULL;
		p->right = NULL;
		root = p;
		return;
	}

	// searching
	while (R != NULL) {
		r = R;
		// going left
		if (key < R->data)
			R = R->left;
		// going right
		else if (key > R->data)
			R = R->right;
		// search was successful, so not inserting node
		else
			return;
	}
	// creating node
	p = new Node;
	p->data = key;
	p->left = NULL;
	p->right = NULL;
	// inserting
	if (p->data < r->data)
		r->left = p;
	else
		r->right = p;
}

void BST::Inorder(Node* p) {
	if (p != NULL) {
		Inorder(p->left);
		cout << p->data << " ";
		Inorder(p->right);
	}
}