#include "StackLL.h"
#include <iostream>
using namespace std;

// constructor
template <class T>
StackLL<T>::StackLL() {
	top = NULL;
	len = 0;
}

// destructor
template <class T>
StackLL<T>::~StackLL() {
	T holder;
	while (top != NULL) {
		Pop(holder);
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
	Node<T>* p;
	p = top;
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

// display getter
template <class T>
void StackLL<T>::Display() {
	Node<T>* p = top;
	while (p != NULL) {
		cout << " " << p->data;
		p = p->link;
	}
	cout << endl;
}