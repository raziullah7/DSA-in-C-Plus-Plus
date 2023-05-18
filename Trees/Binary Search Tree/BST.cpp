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
	Node* R = root, * p = NULL , * r = NULL;
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

// inorder traversal
void BST::Inorder(Node* p) {
	if (p != NULL) {
		Inorder(p->left);
		cout << p->data << " ";
		Inorder(p->right);
	}
}

// delete function
Node* BST::Delete(int key, Node* p) {
	// for empty tree
	if (p == NULL) {
		return NULL;
	}
	// for leaf node or only one node in the tree
	if (p->left == NULL && p->right && p->data == key) {
		if (p == root) {
			root = NULL;
		}
		delete p;
		return NULL;
	}
	// recursively searching and traversing
	if (key < p->data) {
		p->left = Delete(key, p->left);
	}
	else if (key > p->data) {
		p->right = Delete(key, p->right);
	}
	// deleting and replacing with respect to height
	// to maintain balance
	else {
		Node* q;
		// if height of left tree greater than that of right,
		// then replace p with it's Inorder Predecessor
		if (Height(p->left) > Height(p->right)) {
			// get Inorder Predecessor of p
			q = InOrderPred(p);
			// overwrite data of p with it's Inorder Predecessor
			p->data = q->data;
			// delete Inorder Predecessor from it's
			// original location
			p->left = Delete(q->data, p->left);
		}
		// otherwise, replace with Inorder Successor
		else {
			// get Inorder Predecessor of p
			q = InOrderSucc(p);
			// overwrite data of p with it's Inorder Successor
			p->data = q->data;
			// delete Inorder Successor from it's
			// original location
			p->right = Delete(q->data, p->right);
		}
	}
	return p;
}

// method to find InOrder Predecessor of any node
Node* BST::InOrderPred(Node* p) {
	// checking if the node has a predecessor
	if (p->left == NULL) {
		return NULL;
	}
	// else, finding predecessor
	p = p->left;
	while (p != NULL && p->right != NULL) {
		p = p->right;
	}
	return p;
}

// method to find InOrder Successor of any node
Node* BST::InOrderSucc(Node* p) {
	// checking if the node has a successor
	if (p->right == NULL) {
		return NULL;
	}
	// else, finding successor
	p = p->right;
	while (p != NULL && p->left != NULL) {
		p = p->left;
	}
	return p;
}

// method to find height of tree
int BST::Height(Node* p) {
	int left = 0, right = 0;
	if (p == NULL) {
		return -1;
	}
	left = Height(p->left);
	right = Height(p->right);
	
	if (left > right) {
		return (left + 1);
	}
	else {
		return (right + 1);
	}
}