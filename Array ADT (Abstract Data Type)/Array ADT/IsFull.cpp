#include "ArrayADT.h"

template <class T>
bool ArrayADT<T> ::IsFull() {
	/*if (Size == Capacity) return true;
	return false;*/
	return (Size == Capacity);
}