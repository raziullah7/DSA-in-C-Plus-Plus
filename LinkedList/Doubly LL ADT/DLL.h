#pragma once
#include "Node.h"

template<class T>
class DLL {
private:
    Node<T>* first;
    Node<T>* last;
    int len;
public:
    DLL();
    ~DLL() {}
    void Insert(int, T);
    void Delete(int, T&);
    bool Find(int, T&);
    int Search(T);
    void Display();
    bool isEmpty();
    int Length();
};