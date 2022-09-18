// this file contains the implementation of the class 'Array'
// contained in 'Array1D.h'

#include "Array1D.h"

// implementing constructor
// after single(:), value of ArrayCap(passed by the user) is
// assigned to capacity field of the the class Array
Array::Array(int ArrayCap) : capacity(ArrayCap) {
	// using capacity(field) because it has a default value assigned
	// to it (in case the user doesn't enter a value)
	array = new int[capacity];
	// size (field)
	size = 0;
}

// implementing destructor
Array::~Array() {
	delete [] array;
}

// implementing isFull method
bool Array::isFull() {
	if (size == capacity)
		return true;
	return false;
}

// implementing isEmpty method
bool Array::isEmpty() {
	if (size == 0)
		return true;
	return false;
}

// implementing SizeofArray method
int Array::SizeofArray() {
	return size;
}

// implementing istream and ostream, which are both 'friend' functions such methods must
// have a prefix of 'friend' while the classname and scope resolution operator can be omitted

// overloading istream operator(>>) using an object of Array class (&arr)
istream& operator >> (istream& is, Array& arr) {
	cout << "Enter an element to be inserted  in Array\n";
	// arr.array means the starting/base address of the array
	// arr.size is used as index, which is incremented when an element is inserted
	is >> arr.array[arr.size++];
	return is;
}

// overloading ostream operator(<<) using an object of Array class (&arr)
ostream& operator << (ostream& os, Array& arr) {
	for (int i = 0; i < arr.size; i++)
		os << arr.array[i] << "  ";
	return os;
}