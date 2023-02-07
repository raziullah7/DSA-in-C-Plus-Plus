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
	front = last = NULL;
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


