#pragma once
#include "Node.h"

template <class T>
class BinaryTree {
public:
	Node<T>* root;
	BinaryTree();
	Node<T>* newNode(T);
	void InOrder(Node<T>*);
	void PreOrder(Node<T>*);
	void PostOrder(Node<T>*);
	void IterativeInOrder(Node<T>*);
	void IterativePreOrder(Node<T>*);
	int Height(Node<T>*);
	int CountNodes(Node<T>*);
};