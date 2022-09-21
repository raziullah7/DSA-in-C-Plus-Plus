// method to insert an element in the Array

#include "ArrayADT.h"

template <class T>
void ArrayADT<T> :: Insert(int position, T element) {
	// array only has 1 element || position is out of array length
	if (position < 1 || position > Size + 1) {
		throw IllegalParameterValue("Invalid Position...");
	}
	else {
		// this loop shifts all necessary elements one index to the right
		// and leaves the space, where element is to be inserted, empty
		for (int i = Size - 1; i >= position - 1; i--) {
			// position - 1 == index where element is to be inserted
			// Size - 1 == maximum index that holds an assigned value
			Arr[i + 1] = Arr[i];
		}
		// inserting the element
		Arr[position - 1] = element;
		// incrementing the Size of Array
		Size++;
	}
}