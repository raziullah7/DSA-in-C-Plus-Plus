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

}