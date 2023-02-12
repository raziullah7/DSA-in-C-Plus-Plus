#pragma once

template <class T>
class DeQueue {
private:
	int front, rear, len, size;
	T* DQ;
public:
	DeQueue(int);
	~DeQueue();
	bool IsFull();
	bool IsEmpty();
	int Length();
	void InsertFront(T);
	void InsertRear(T);
	void DeleteFront(T&);
	void DeleteRear(T&);
	void Display();
};

