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

// insert function
template <class T>
void DLL<T>::Insert(int position, T element) {
	// input validation
	if (position < 1 || position > len + 1) {
		cout << "Invalid Position! Enter a position"
			<< " between 1 to " << len + 1 << "\n";
		return;
	}

	// creating node
	Node<T>* temp = new Node<T>;
	temp->data = element;
	temp->lptr = NULL;
	temp->rptr = NULL;

	// if there are no elements in the LL
	if (first == NULL) {
		first = temp;
		last = temp;
	}

	// otherwise take position into consideration
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

// display function
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