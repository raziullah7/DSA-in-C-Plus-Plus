#include <iostream>
using namespace std;

template<class T>
class myStack {
private:
	T* s;
	int len;
	int size;
	int top;
public:
	myStack(int cap);
	~myStack() { delete[] s; }
	bool IsEmpty();
	bool IsFull();
	void Push(T);
	void Pop(T&);
	int Length() { return len; }
	T TopElement();
	void Display();
	int Search(T);
	bool Find(int, T&);
};
