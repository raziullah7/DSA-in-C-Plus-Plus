#include <iostream>
#include "CircularQueue.h"
using namespace std;

// constructor
template <class T>
circularQ<T>::circularQ(int totalSize) {
	this->size = totalSize;
	len = 0;
	rear = 0;
	front = 0;
	Q = new T[size];
}

// destructor
template <class T>
circularQ<T>::~circularQ() {
	delete[] Q;
}

// getter for front element method
template <class T>
T circularQ<T>::frontElem() {
	return Q[(front + 1) % size];
}

// getter for rear element method
template <class T>
T circularQ<T>::rearElem() {
	return Q[rear];
}

// ifFull method
template <class T>
bool circularQ<T>::isFull() {
	// custom for circular queue
	return (front == ((rear + 1) % size));
}

// isEmpty method
template <class T>
bool circularQ<T>::isEmpty() {
	// custom for circular queue
	return (front == rear);
}

// insertion
template <class T>
void circularQ<T>::EnQueue(T element) {
	//// incrementing this way to enable circular insertion
	//rear = (rear + 1) % size;
	//// isFull condition check
	//if (isFull()) {
	//	cout << "Circular Queue is Full!\n";
	//	// now decrement to previous index to remove
	//	// ambiguity in isFull and isEmpty conditions
	//	if (rear == 0)
	//		rear = size - 1;
	//	else
	//		rear--;
	//	return;
	//}

	// more simple approach
	// full queue check
	if (front == ((rear + 1) % size)) {
		cout << "Circular Queue is Full!\n";
		return;
	}
	rear = (rear + 1) % size;
	Q[rear] = element;
	len++;
}

// deletion
template <class T>
void circularQ<T>::DeQueue(T& element) {
	// empty queue check
	if (isEmpty()) {
		cout << "Circular Queue is Empty!\n";
		return;
	}
	// increment front
	front = (front + 1) % size;
	// get front (item to be deleted)
	element = Q[front];
	// decrement length
	len--;
}

// display method
template <class T>
void circularQ<T>::Display() {
	// initializing loop control variable
	int i = (front + 1) % size;
	// looping and printing
	while (i != (rear + 1) % size) {
		cout << Q[i] << "<-";
		i = (i + 1) % size;
	}
}

// length method
template <class T>
int circularQ<T>::Length() {
	return len;
}