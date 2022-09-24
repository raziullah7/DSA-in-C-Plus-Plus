#include "ArrayADT.h"

template <class T>
void ArrayADT<T>::Delete(int position, T &element) {
	// handling invalid positions
	if (position < 1 || position > Size)
		throw IllegalParameterValue("Invalid Position...");

	// this parameter allows to return the value of the deleted position
	element = Arr[position - 1];

	// simply overwriting the element, that is to be
	// deleted, by the elements next in line
	for (int i = position - 1; i < Size - 1; i++) {
		Arr[i] = Arr[i + 1];
	}
	// making the last element inaccessible by reducing the size
	Size--;
}