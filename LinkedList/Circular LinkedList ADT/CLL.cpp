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
		for (int i = 0; i < position - 2; i++) {
			p = p->link;
		}
		// inserting node
		temp->link = p->link;
		p->link = temp;
	}
	len++;
}

// delete function
template <class T>
void CLL<T>::Delete(int position, T& element) {
	// deleting from start
	if (position == 1) {
		// getting the element in either case
		element = first->data;
		// if there is only one node in CLL
		if (first == last) {
			// element = first->data;
			delete first;
			first = last = NULL;
		}
		// CLL has more than one node
		else {
			// element = first->data;
			Node<T>* p = first;
			first = first->link;
			last->link = first;
			delete p;
		}
	}

	// delete from end
	else if (position == len) {
		// traversal node pointers
		Node<T>* p, * q;
		p = first;
		// travering
		for (int i = 0; i < position - 2; i++)
			p = p->link;
		q = p->link;
		// getting element
		element = q->data;
		// rearranging pointers to delete node
		last = p;
		p->link = first;
		// deleting
		delete q;
	}

	// for input validatation
	else if (len == 0) {
		std::cout << "Circular LinkedList is Empty ..."
			<< "\n";
		return;
	}

	else if (position > len || position < 0) {
		std::cout << "Invalid Position ..."
			<< "\n";
		return;
	}

	// deleting from any middle position
	else {
		// traversing nodes
		Node<T>* p, * q;
		p = first;
		// traversing
		for (int i = 0; i < position - 2; i++) {
			p = p->link;
		}
		// q is the node to be deleted, while p is 
		// the node previous to q (which is to be deleted)
		q = p->link;
		p->link = q->link;
		// getting element
		element = q->data;
	}

	// reducing length of CLL
	len--;
}

// display function
template <class T>
void CLL<T>::Display() {
	// checking if the CLL is empty
	if (first == NULL) {
		std::cout << "Circular LinkedList is Empty!"
			<< "\n";
		return;
	}
	// otherwise display the CLL
	Node<T>* p = first;
	do {
		std::cout << p->data << " ";
		p = p->link;
	} while (p != first);
	std::cout << "\n";
}