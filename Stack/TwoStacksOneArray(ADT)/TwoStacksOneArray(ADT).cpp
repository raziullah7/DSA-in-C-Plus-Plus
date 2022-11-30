#include <iostream>
using namespace std;

template <class T>
class TwoStacks {
private:
	T* s;
	int top1, top2;
	int len, size;

public:
	TwoStacks(int);
	~TwoStacks() { delete s; }
	void Push1(T);
	void Push2(T);
	void Pop1(T&);
	void Pop2(T&);
	void Display1();
	void Display2();
	T TopMost1();
	T TopMost2();
};