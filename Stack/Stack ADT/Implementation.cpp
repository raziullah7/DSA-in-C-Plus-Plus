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

// find function
template <class T>
bool myStack<T>::find(int position, T& element) {
	if (position < 1 || position > len + 1) {
		cout << "Invalid Position!" << endl;
		return false;
	}
	// position == index + 1 (position is normies language)
	element = s[position - 1];
	return true;
}

// search function (returns position)
template <class T>
int myStack<T>::search(T element) {
	for (int i = 0; i <= top; i++) {
		if (element == s[i])
			return (i + 1); // successful
	}
	return -1;				// unsuccessful
}