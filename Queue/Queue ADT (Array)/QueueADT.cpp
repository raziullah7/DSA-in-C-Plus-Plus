#include "QueueADT.h"
#include <iostream>

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

