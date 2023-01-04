#include "QueueADT.h"
#include <iostream>
using namespace std;

// constructor
template <class T>
Queue<T>::Queue(int size) {
    this->size = size;
    len = 0;
    front = -1;
    rear = -1;
    Q = new T[size];
}

// desturctor
template <class T>
Queue<T>::~Queue() {
    delete [] Q;
}

// enqueue method to insert elements from rear pointer
template <class T>
void Queue<T>::EnQueue(T element) {
    if (rear == size-1) {
        cout << "Queue is Empty!\n";
        return;
    }
    rear++;
    Q[rear] = element;
    len++;
}

// dequeue method to delete elements from front pointer
template <class T>
void Queue<T>::DeQueue(T& element) {
    if (rear == front) {
        cout << "Queue is Full!\n";
        return;
    }
    front++;
    element = Q[front];
    len--;
}