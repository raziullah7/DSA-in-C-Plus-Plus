#include "TwoStacksOneArray(ADT).cpp"

// constructor
template <class T>
TwoStacks<T>::TwoStacks(int totalSize) {
	size = totalSize;
	len = 0;
	top1 = -1;
	top2 = totalSize;
	s = new T[totalSize];
}

// Push1() for pushing from start of array
// (pushing in stack 1)
template <class T>
void TwoStacks<T>::Push1(T element) {
	if (top1 < top2 - 1) {
		cout << "Stack Overflow" << endl;
		return;
	}
	else {
		top1++;
		s[top1] = element;
		len++;
	}
}

// Push2() for pushing from end of array
// (pushing in stack 2)
template <class T>
void TwoStacks<T>::Push2(T element) {
	if (top1 < top2 - 1) {
		cout << "Stack Overflow" << endl;
		return;
	}
	else {
		top2--;
		s[top1] = element;
		len++;
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

template <class T>
T TwoStacks<T>::TopMost1() {
	return s[top1];
}

template <class T>
T TwoStacks<T>::TopMost2() {
	return s[top2];
}