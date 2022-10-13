#include "ArrayADT.h"

template <class T>
void ArrayADT<T> :: Reverse() {
	/*
	// using auxiliary array (copy array)
	int* temp = new T[Size];
	// manipulating both i and j in one loop
	// storing reverse array in temp
	for (int i = Size - 1, j = 0; i >= 0; i--, j++) {
		temp[j] = Arr[i];
	}
	// overwriting original array again
	for (int i = 0; i < Size; i++) {
		Arr[i] = temp[i];
	}
	*/

	// subtituting first and last value, second and second
	// last value, third and third last value; until i and 
	// j become equal or i becomes 1 less than j (i <= j)
	for (int i = 0, j = Size - 1; i <= j; i++, j--) {
		// swapping elements using 'swapper'
		int swapper = Arr[i];
		Arr[i] = Arr[j];
		Arr[j] = swapper;
	}
}