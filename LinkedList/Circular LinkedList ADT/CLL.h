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
    void Insert(int, T);
    void Delete(int, T&);
    bool Find(int, T&);
    int Search(T);
    void Display();
    void RDisplay(Node<T>* p);
    int Length();
    bool isEmpty();
};

