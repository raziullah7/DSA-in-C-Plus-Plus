#include "TwoStacksOneArray(ADT).h"

// constructor
template <class T>
TwoStacks<T>::TwoStacks(int totalSize) {
	size = totalSize;
	len = 0;
	top1 = -1;
	top2 = size;
	s = new T[size];
}

// destructor
template <class T>
TwoStacks<T>::~TwoStacks() {
	delete[] s;
}

// Push1() for pushing from start of array
// (pushing in stack 1)
template <class T>
void TwoStacks<T>::Push1(T element) {
	if (top1 < top2 - 1) {
		top1++;
		s[top1] = element;
		len++;
	}
	else {
		cout << "Stack Overflow" << endl;
		return;
	}
}

// Push2() for pushing from end of array
// (pushing in stack 2)
template <class T>
void TwoStacks<T>::Push2(T element) {
	if (top1 < top2 - 1) {
		top2--;
		s[top2] = element;
		len++;
	}
	else {
		cout << "Stack Overflow" << endl;
		return;
	}
}

// Pop1() for poping from start of array
// (poping in stack 1)
template <class T>
void TwoStacks<T>::Pop1(T &element) {
	if (top1 == -1) {
		cout << "Stack Underflow" << endl;
		return;
	}
	else {
		element = s[top1];
		s[top1] = NULL;
		top1--;
		len--;
	}
}

// Pop2() for poping from end of array
// (poping in stack 2)
template <class T>
void TwoStacks<T>::Pop2(T& element) {
	if (top2 == size) {
		cout << "Stack Underflow" << endl;
		return;
	}
	else {
		element = s[top2];
		s[top2] = NULL;
		top2++;
		len--;
	}
}

// method to return the top element of stack # 1
template <class T>
T TwoStacks<T>::TopMost1() {
	return s[top1];
}

// method to return the top element of stack # 1
template <class T>
T TwoStacks<T>::TopMost2() {
	return s[top2];
}

// method to print stack # 1
template <class T>
void TwoStacks<T>::Display1() {
	cout << "Stack # 1 Contents :";
	for (int i = 0; i <= top1; i++) {
		cout << " " << s[i];
	}
	cout << endl;
}

// method to print stack # 2
template <class T>
void TwoStacks<T>::Display2() {
	cout << "Stack # 2 Contents :";
	for (int i = size - 1; i >= top2; i--) {
		cout << " " << s[i];
	}
	cout << endl;
}