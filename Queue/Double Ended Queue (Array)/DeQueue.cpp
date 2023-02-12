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
		cout << "DeQueue is Empty!\n";
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

// insertion from front
template<class T>
void DeQueue<T>::InsertFront(T element) {
	if (IsFull()) {
		cout << "DeQueue is Full!\n";
		return;
	}
	// first insertion
	if (front == -1) {
		front = 0;
	}
	// never inserted from front
	// so circle around from start
	else if (front == 0) {
		front == size - 1;
	}
	// otherwise treat like a normal array
	else {
		front--;
	}
	DQ[front] = element;
	len++;
}

// insertion from rear
template<class T>
void DeQueue<T>::InsertRear(T element) {
	if (IsFull()) {
		cout << "DeQueue is Full!\n";
		return;
	}
	// first insertion
	if (front == -1) {
		front = 0;
	}
	// never inserted from rear
	// so circle around from end
	else if (rear == size - 1) {
		rear = 0;
	}
	else {
		rear++;
	}
	DQ[rear] = element;
	len++;
}