#pragma once
template <class T>
class circularQ {
private:
    // indexes of the queue array
    int front, rear;
    // len is the occupied capacity
    // size is max capacity
    int len, size;
    // array pointer to store the queue
    T* Q;
public:
    circularQ(int size);
    ~circularQ();
    T frontElem();
    T rearElem();
    void EnQueue(T);
    void DeQueue(T&);
    bool isEmpty();
    bool isFull();
    int Length();
    void Display();
};