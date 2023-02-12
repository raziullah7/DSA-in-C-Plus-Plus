#include "DeQueue.h"

// constructor
template <class T>
DeQueue<T>::DeQueue(int totalSize) {
	size = totalSize;
	front = -1;
	rear = 0;
	len = 0;
	DQ = new T[size];
}

// destructor
template <class T>
DeQueue<T>::~DeQueue() {
	delete[] DQ;
}

// isFull method
template<class T>
bool DeQueue<T>::IsFull() {
	return ((front == 0 && Rear == size - 1) || front == Rear + 1);
}

// isEmpty method
template<class T>
bool DeQueue<T>::IsEmpty() {
	return (front == -1);
}

// length method
template<class T>
int DeQueue<T>::Length() {
	return len;
}

// display method
template<class T>
void DeQueue<T>::Display() {
	if (IsEmpty()) {
		cout << "Queue is Empty!\n";
		return;
	}
	// initializing loop control variable
	int i = (front + 1) % size;
	// looping and printing
	while (i != (rear + 1) % size) {
		cout << DQ[i] << "<-";
		i = (i + 1) % size;
	}
}