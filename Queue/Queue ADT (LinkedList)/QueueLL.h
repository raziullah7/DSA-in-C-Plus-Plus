#pragma once
#include "Node.h"

template <class T>
class QueueLL {
private:
    // front and rear are substitutions of first
    // and last pointers in a simple linkedlist
    Node<T>* front, * rear;
    // len is storing the current length of queue
    int len;

public:
    QueueLL();
    ~QueueLL();
    void EnQueue(T);
    void DeQueue(T&);
    bool Find(int, T&);
    int Search(T);
    bool isEmpty();
    T FrontElem();
    T RearElem();
    int Length();
    void Display();
};

