#include "DLL.h"
#include <iostream>
using namespace std;

// constructor
template <class T>
DLL<T>::DLL() {
	first = NULL;
	last = NULL;
	len = 0;
}

// destructor
template <class T>
DLL<T>::~DLL() {
	// traversal node
	Node<T>* p = first;
	// traversing and deleting
	while (p != NULL) {
		first = first->rptr;
		delete p;
		p = first;
	}
}

// Insert function
template <class T>
void DLL<T>::Insert(int position, T element) {
	// input validation
	if (position < 1 || position > len + 1) {
		cout << "Invalid Position! Enter a position"
			<< " between 1 and " << len + 1 << "\n";
		return;
	}

	// creating node
	Node<T>* temp = new Node<T>;
	temp->data = element;
	temp->lptr = NULL;
	temp->rptr = NULL;

	// if there are no elements in the DLL
	if (first == NULL) {
		first = temp;
		last = temp;
	}

	// otherwise, take position in consideration
	else {
		if (position == 1) {
			temp->rptr = first;
			first->lptr = temp;
			first = temp;
		}
		else if (position == len + 1) {
			last->rptr = temp;
			temp->lptr = last;
			last = temp;
		}
		else {
			// traversing
			Node<T>* p = first;
			for (int i = 0; i < position - 2; i++) {
				p = p->rptr;
			}
			// inserting node
			// connecting temp
			temp->rptr = p->rptr;
			temp->lptr = p;
			// connecting surroundings
			p->rptr = temp;
			p = temp->rptr;
			p->lptr = temp;
		}
	}
	// incrementing length of DLL
	len++;
}

// Display function
template <class T>
void DLL<T>::Display() {
	// if list is empty
	if (len == 0) {
		cout << "Double LinkedList Empty!\n";
		return;
	}
	// otherwise print the contents
	Node<T>* p = first;
	while (p != NULL) {
		cout << p->data << "->";
		p = p->rptr;
	}
	cout << "\n";
}

// Delete function
template <class T>
void DLL<T>::Delete(int position, T& element) {
	// if DLL is empty
	if (len == 0) {
		cout << "Double LinkedList Empty!\n";
		return;
	}

	// input validation
	if (position < 1 || position > len) {
		cout << "Invalid Position! Enter a position"
			<< " between 1 and " << len << "\n";
		return;
	}

	// otherwise, take position in consideration
	else {
		if (position == 1) {
			// getting element
			element = first->data;
			// traversal node
			Node<T>* p = first;
			// deleting
			first = first->rptr;
			first->lptr = NULL;
			delete p;
		}
		else if (position == len) {
			// getting element
			element = last->data;
			// traversal node
			Node<T>* p = last;
			// deleting
			last = last->lptr;
			last->rptr = NULL;
			delete p;
		}
		else {
			// traversal nodes
			Node<T>* p, * q;
			p = first;
			// traversing
			for (int i = 0; i < position - 2; i++) {
				p = p->rptr;
			}
			q = p->rptr;
			// getting element
			element = q->data;
			// deleting
			p->rptr = q->rptr;
			q->rptr->lptr = p;
			delete q;
		}
	}
	// decrementing length
	len--;
}

// isEmpty function
template <class T>
bool DLL<T>::isEmpty() {
	if (len == 0)
		return true;
	else
		return false;
}

// Length function
template <class T>
int DLL<T>::Length() {
	return len;
}

// Find function (returns true or false)
template <class T>
bool DLL<T>::Find(int position, T& element) {
	// input validation
	if (position < 1 || position > len) {
		cout << "Invalid Position! Enter a position"
			<< " between 1 and " << len << "\n";
		return false;
	}

	// traversal node
	Node<T>* p = first;
	// traversing
	for (int i = 0; i < position - 1; i++) {
		p = p->rptr;
	}
	// getting element to find on given position
	element = p->data;
	// returning
	return true;
}

// Search function (returns position of searched element)
template <class T>
int DLL<T>::Search(T element) {
	// traversal node
	Node<T>* p = first;
	// traversing and checking
	for (int i = 1; i <= len; i++) {
		if (p->data == element) {
			// successful
			return i;
		}
	}
	// unsuccessful
	return -1;
}