#include "ArrayADT.h"

template <class T>
// method to search an element in the Array
int ArrayADT<T> :: Search(T element) {
	for (int i = 0; i < Size; i++) {
		if (Arr[i] == element)
			// successful search
			return i + 1;
	}
	// unsuccessful search
	return -1;
}