#include "ArrayADT.h"

template<class T>
T ArrayADT<T>::Get(int index) {
	if (index < 0 || index > Size)
		throw IllegalParameterValue("Invalid Index....");
	return Arr[index];
}