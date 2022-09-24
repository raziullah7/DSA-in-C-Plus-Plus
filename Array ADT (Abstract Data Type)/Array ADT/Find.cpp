#include "ArrayADT.h"

template <class T>
// method to find the element at a position
bool ArrayADT<T> :: Find(int position, T& element) {
	if (position < 1)
		throw IllegalParameterValue("Invalid Position...");
	else if (position > Size)
		return false;
	else {
		element = Arr[position - 1];
		return true;
	}
}