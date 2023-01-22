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
	while (!isEmpty()) {
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
	if (isEmpty()) {
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

// display method
template <class T>
void StackLL<T>::Display() {
	Node<T>* p = top;
	while (p != NULL) {
		cout << " " << p->data;
		p = p->link;
	}
	cout << endl;
}

// isEmpty method
template <class T>
bool StackLL<T>::isEmpty() {
	return (len == 0);
}

// Find method, gets the element at given position
template <class T>
bool StackLL<T>::Find(int pos, T& element) {
	// input validation and empty stack check
	if (isEmpty() || pos > len + 1 || pos < 1) {
		return false;
	}
	// traversal node
	Node<T>* p = top;
	// traversing
	for (int i = 0; i <= pos - 2; i++) {
		p = p->link;
	}
	// getting element
	element = p->data;
	return true;
}