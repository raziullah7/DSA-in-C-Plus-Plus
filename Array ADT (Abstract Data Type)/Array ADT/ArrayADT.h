#pragma once

#include <iostream>
using namespace std;

// a user-defined exception class specifically for ArrayADT
class IllegalParameterValue {
private:
    string message;

public:
    // constructor
    IllegalParameterValue(string msg) {
        message = msg;
    }
    // output method
    void outputMessage() {
        cout << message << endl;
    }
};


// using class template for generics, which makes ArrayADT a template class
template<class T>
class ArrayADT {
private:
    T* Arr;
    int Capacity;
    int Size;

public:
    ArrayADT(int initialCap = 10);
    ~ArrayADT();
    void Insert(int position, T element);
    void Delete(int pos, T& elem);
    bool Find(int pos, T& elem);
    int Search(T);
    int Length();
    void Display();
    bool IsEmpty();
    bool IsFull();
    T Get(int index);
    void Set(int index, T);
    int indexOf(T);
};