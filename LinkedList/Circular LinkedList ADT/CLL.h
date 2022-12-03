#pragma once
#include "Node.h"

template <class T>
class CLL {
private:
	Node<T>* first, * last;
	int len;

public:
    CLL();
    ~CLL() {}
    Node<T>* getFirst() { return first; }
    void Insert(int, T);
    void Delete(int, T&);
    bool Find(int, T&);
    int Search(T);
    void Display();
    void RDisplay(Node<T>* p);
    int Length();
    bool isEmpty();
};

