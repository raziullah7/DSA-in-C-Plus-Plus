#pragma once
#include "Node.h"

template<class T>
class StackLL {
private:
    Node<T>* top;
    int len;

public:
    StackLL();
    ~StackLL();
    void Push(T);
    void Pop(T&);
    bool Find(int, T&);
    int Search(T);
    int Length();
    bool isEmpty();
    void Display();
};

