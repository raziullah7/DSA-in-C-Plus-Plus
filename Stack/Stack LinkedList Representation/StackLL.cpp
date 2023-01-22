#include "StackLL.h"
#include <iostream>

// constructor
template <class T>
StackLL<T>::StackLL() {
	top = NULL;
	len = 0;
}

// destructor
template <class T>
StackLL<T>::~StackLL() {
	while (top != NULL) {
		Pop(top);
	}
}

// push method
template <class T>
void StackLL<T>::Push(T element) {
	// node creation
	Node<T>* temp;
	temp = new Node<T>;
	// node assignment
	temp->data = element;
	temp->link = top;
	top = temp;
	// increase length
	len++;
}

// pop method
template <class T>
void StackLL<T>::Pop(T& element) {
	// empty stack check
	if (len == 0) {
		cout << "Stack Empty!\n";
		return;
	}
	// traversal node
	Node* p = top;
	// getting element
	element = p->data;
	// assign new top node
	top = top->link;
	// delete old top node
	p->link = NULL;
	delete p;
	// decrease length
	len--;
}

// length getter
template <class T>
int StackLL<T>::Length() {
	return len;
}