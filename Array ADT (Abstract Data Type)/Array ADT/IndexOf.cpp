#include "ArrayADT.h"

template<class T>
int ArrayADT<T>::IndexOf(T element)
{
	int i = 0;
	for (int i = 0; i < Size; i++) {
		if (Arr[i] == element)
			break;
	}
	return i;
}