#include "CLL.h"
#include <iostream>

// constructor
template <class T>
CLL<T>::CLL() {
	first = NULL;
	last = NULL;
	len = 0;
}

// insert function
template <class T>
void CLL<T>::Insert(int position, T element) {
	// creation of new Node
	Node<T>* temp = new Node<T>;
	temp->data = element;
	// circular LL keeps the link of itself instead of NULL
	// (if there is only one element or no element)
	temp->link = temp;
	
	// CLL is empty
	if (first == NULL) {
		first = temp;
		last = temp;
	}
	// inserting on position 1
	if (position == 1) {
		temp->link = first;
		last->link = temp;
		first = temp;
	}
	// inserting on last position
	else if (position == len + 1) {
		last->link = temp;
		temp->link = first;
		last = temp;
	}
	// inserting on some middle position
	// (which is not the beginning or end position)
	else {
		// traversing to (position - 2)
		Node<T>* p = first;
		for (int i = 0; i < 2; i++) {
			p = p->link;
		}
		// inserting node
		temp->link = p->link;
		p->link = temp;
	}
}