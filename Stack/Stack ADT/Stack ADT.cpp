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
	bool isEmpty();
	bool isFull();
	void push(T);
	void pop(T&);
	int length() { return len; }
	T topElement();
	void display();
	int search(T);
	bool find(int, T&);
};
