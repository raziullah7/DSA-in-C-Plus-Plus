// method to print all elements of the Array

#include "ArrayADT.h"

template <class T>
void ArrayADT<T> :: Display() {
	for (int i = 0; i < Size; i++) {
		cout << Arr[i] << ' ';
	}
	cout << endl;
}