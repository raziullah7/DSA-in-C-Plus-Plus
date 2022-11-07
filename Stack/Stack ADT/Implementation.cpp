#include "Stack ADT.cpp"

// constructor
template <class T>
myStack<T>::myStack(int theSize) {
	size = theSize;
	len = 0;
	top = -1;
	s = new T[size];
}

// push function
template <class T>
void myStack<T>::push(T element) {
	if (top == size - 1) {
		cout << "Stack Overflow Occured!" << endl;
		return;
	}
	/*top++;
	s[top] = element;*/
	s[++top] = element;
	len++;
}

// pop function
template <class T>
void myStack<T>::pop(T &element) {
	if (top == - 1) {
		cout << "Stack Underflow Occured!" << endl;
		return;
	}
	/*element = s[top];
	top--;*/
	element = s[top--];
	len--;
}