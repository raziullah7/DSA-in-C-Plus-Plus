#include "BinaryTree.h"
#include "StackADT.cpp"
#include <iostream>
using namespace std;

// constructor
template <class T>
BinaryTree<T>::BinaryTree() {
	root = NULL;
}

// adding new node
template <class T>
Node<T>* BinaryTree<T>::newNode(T data) {
	root = new Node<T>;
	root->data = data;
	root->Lchild = NULL;
	root->Rchild = NULL;
	return root;
}

// recursive in-order traversal
template <class T>
void BinaryTree<T>::InOrder(Node<T>* r) {
	if (r != NULL) {
		InOrder(r->Lchild);
		cout << " " << r->data;
		InOrder(r->Rchild);
	}
}

// recursive pre-order traversal
template <class T>
void BinaryTree<T>::PreOrder(Node<T>* r) {
	if (r != NULL) {
		cout << " " << r->data;
		PreOrder(r->Lchild);
		PreOrder(r->Rchild);
	}
}

// recursive post-order traversal
template <class T>
void BinaryTree<T>::PostOrder(Node<T>* r) {
	if (r != NULL) {
		PostOrder(r->Lchild);
		PostOrder(r->Rchild);
		cout << " " << r->data;
	}
}

// iterative in-order traversal
template <class T>
void BinaryTree<T>::IterativeInOrder(Node<T>* p) {
	// making stack
	StackADT<Node<T>*> st(10);
	// traversing
	while (p != NULL || !(st.IsEmpty())) {
		// going left
		if (p != NULL) {
			st.Push(p);
			p = p->Lchild;
		}
		// going right
		else {
			st.Pop(p);
			cout << " " << p->data;
			p = p->Rchild;

		}
	}
}

// iterative in-order traversal
template <class T>
void BinaryTree<T>::IterativePreOrder(Node<T>* p) {
	// making stack
	StackADT<Node<T>*> st(10);
	// traversing
	while (p != NULL || !st.IsEmpty()) {
		// going left
		if (p != NULL) {
			cout << " " << p->data;
			st.Push(p);
			p = p->Lchild;
		}
		// going right
		else {
			st.Pop(p);
			p = p->Rchild;
		}
	}
}

// height of tree
template <class T>
int BinaryTree<T>::Height(Node<T>* p) {
	int l = 0, r = 0;
	// base case
	if (p == 0) {
		return -1;
	}
	// otherwise, recursive case
	l = Height(p->Lchild);
	r = Height(p->Rchild);
	// conditional return
	if (l > r) {
		return l + 1;
	}
	else {
		return r + 1;
	}
}