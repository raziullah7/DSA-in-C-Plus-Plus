#pragma once

template<class T>
class Queue {
private:
    // indexes of the queue array
    int front, rear;
    // len is the occupied capacity
    // size is max capacity
    int len, size;
    // array pointer to store the queue
    T* Q;
public:
    Queue(int size);
    ~Queue();
    void EnQueue(T);
    void DeQueue(T&);
    bool Find(int, T&);
    int Search(T);
    bool isEmpty();
    bool isFull();
    int Length();
    void Display();
};