// adds element at the end of array
#include "ArrayADT.h"

template <class T>
void ArrayADT<T> ::Append(T element) {
	Arr[Size] = element;
	Size++;
}