#include "BinaryTree.h"
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
	root->Lchild = NULL;
	root->Rchild = NULL;
	return root;
}

// recursive in-order traversal
template <class T>
void BinaryTree<T>::InOrder(Node<T>* r) {
	InOrder(r->Lchild);
	cout << " " << r->data;
	InOrder(r->Rchild);
}

// recursive pre-order traversal
template <class T>
void BinaryTree<T>::PreOrder(Node<T>* r) {
	cout << " " << r->data;
	InOrder(r->Lchild);
	InOrder(r->Rchild);
}

// recursive post-order traversal
template <class T>
void BinaryTree<T>::PostOrder(Node<T>* r) {
	InOrder(r->Lchild);
	InOrder(r->Rchild);
	cout << " " << r->data;
}