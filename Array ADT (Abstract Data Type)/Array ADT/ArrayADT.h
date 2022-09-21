#pragma once

template<class T>
class ArrayADT {
private:
    T* Arr;
    int Capacity;
    int Size;
public:
    ArrayADT(int initialCap = 10);
    ~ArrayADT();
    void Insert(int pos, T elem);
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