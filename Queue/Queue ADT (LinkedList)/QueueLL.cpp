#include "QueueLL.h"
#include <iostream>
using namespace std;

// constructor
template <class T>
QueueLL<T>::QueueLL() {
	front = rear = NULL;
	len = 0;
}

// destructor
template <class T>
QueueLL<T>::~QueueLL() {
	Node<T>* p = front;
	while (p != NULL) {
		front = front->link;
		p->link = NULL;
		p = front;
	}
	delete p;
	front = rear = NULL;
}

// front of queue getter
template <class T>
T QueueLL<T>::FrontElem() {
	return front->data;
}

// end of queue getter
template <class T>
T QueueLL<T>::RearElem() {
	return rear->data;
}

// isEmpty method
template <class T>
bool QueueLL<T>::isEmpty() {
	if (front == NULL && rear == NULL) {
		return true;
	}
	return false;
}

// insertion(enqueue) operation
// constant time complexity O(1)
template <class T>
void QueueLL<T>::EnQueue(T element) {
	// node creation
	Node<T>* temp = new Node<T>;
	temp->data = element;
	temp->link = NULL;
	// node insertion
	if (isEmpty()) {
		front = rear = temp;
	}
	rear->link = temp;
	rear = temp;
	// increasing length
	len++;
}

// deletion(dequeue) operation
// constant time complexity O(1)
template <class T>
void QueueLL<T>::DeQueue(T& element) {
	// getting element
	element = front->data;
	// traversal node
	Node<T>* p = front;
	// deleting node
	front = front->link;
	p->link = NULL;
	delete p;
	// dereasing length
	len--;
}

// get element on a certain position in the queue
template <class T>
bool QueueLL<T>::Find(int pos, T& element) {
	// input validation
	if (pos < 1 || pos > len) {
		cout << "Invalid Position!";
		return false;
	}
	// traversal node
	Node<T>* p = front;
	// traversing till the position
	for (int i = 0; i < pos - 1; i++) {
		p = p->link;
	}
	// getting element
	element = p->data;
	// return
	return true;
}

// finds the position on a certain element
template <class T>
int QueueLL<T>::Search(T element) {
	// traversal node
	Node<T>* p = front;
	// i holds the current position being traversed
	for (int i = 1; p != NULL; i++) {
		// successsful search case
		if (p->data == element) {
			return i;
		}
		p = p->link;
	}
	// unsuccessful search case
	return -1;
}

// length method
template <class T>
int QueueLL<T>::Length() {
	return len;
}

// display method
template <class T>
void QueueLL<T>::Display() {
	// traversal node
	Node<T>* p = front;
	// traversing and printing
	while (p != NULL) {
		cout << p->data << "<-";
		p = p->link;
	}
	cout << endl;
	delete p;
}